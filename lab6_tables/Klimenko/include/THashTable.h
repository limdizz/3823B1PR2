#pragma once

template <typename TKey, typename TValue>
class TChainingHashTable {
private:
    static const size_t TABLE_SIZE = 10;
    std::list<std::pair<TKey, TValue>> table[TABLE_SIZE];

    size_t hashFunction(const TKey& key, const TValue& poly) const {
        size_t sumDegrees = poly.computeSumDegrees();
        return (key * sumDegrees) % TABLE_SIZE;
    }

public:
    void insert(const TKey& key, const TValue& value) {
        size_t index = hashFunction(key, value);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    TValue* find(const TKey& key, const TValue& value) {
        size_t index = hashFunction(key, value);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                return &pair.second;
            }
        }
        return nullptr;
    }

    void remove(const TKey& key, const TValue& value) {
        size_t index = hashFunction(key, value);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                table[index].erase(it);
                break;
            }
        }
    }

    void print() const {
        for (size_t i = 0; i < TABLE_SIZE; ++i) {
            std::cout << "Bucket " << i << ": " << std::endl;
            for (const auto& pair : table[i]) {
                std::cout << pair.first << " -> ";
                pair.second.print();
            }
            
        }
    }
};

template <typename TKey, typename TValue>
class TDoubleHashingHashTable {
private:
    static const size_t TABLE_SIZE = 10;
    std::vector<std::pair<TKey, TValue>*> table;
    std::vector<bool> occupied;
    std::vector<bool> deleted;

    size_t hashFunction1(const TKey& key, const TValue& poly) const {
        size_t sumDegrees = poly.computeSumDegrees();
        return (key * sumDegrees) % TABLE_SIZE;
    }

    size_t hashFunction2(const TKey& key, const TValue& poly) const {
        size_t sumDegrees = poly.computeSumDegrees();
        return 1 + ((key * sumDegrees) % (TABLE_SIZE - 1));
    }

public:
    TDoubleHashingHashTable() : table(TABLE_SIZE, nullptr), occupied(TABLE_SIZE, false), deleted(TABLE_SIZE, false) {}

    void insert(const TKey& key, const TValue& value) {
        size_t index = hashFunction1(key, value);
        size_t step = hashFunction2(key, value);

        while (occupied[index]) {
            if (table[index] && table[index]->first == key) {
                table[index]->second = value;
                return;
            }
            index = (index + step) % TABLE_SIZE;
        }

        table[index] = new std::pair<TKey, TValue>(key, value);
        occupied[index] = true;
        deleted[index] = false;
    }

    TValue* find(const TKey& key, const TValue& value) {
        size_t index = hashFunction1(key, value);
        size_t step = hashFunction2(key, value);

        while (occupied[index]) {
            if (table[index] && table[index]->first == key) {
                return &table[index]->second;
            }
            index = (index + step) % TABLE_SIZE;
        }
        return nullptr;
    }

    void remove(const TKey& key, const TValue& value) {
        size_t index = hashFunction1(key, value);
        size_t step = hashFunction2(key, value);

        while (occupied[index]) {
            if (table[index] && table[index]->first == key) {
                delete table[index];
                table[index] = nullptr;
                occupied[index] = false;
                deleted[index] = true;
                return;
            }
            index = (index + step) % TABLE_SIZE;
        }
    }

    void print() const {
        for (size_t i = 0; i < TABLE_SIZE; ++i) {
            std::cout << "Index " << i << ": ";
            if (!occupied[i] || table[i] == nullptr) {
                std::cout << "      ";
            }
            else {
                std::cout << table[i]->first << " -> ";
                table[i]->second.print();
            }
            std::cout << std::endl;
        }
    }
};
