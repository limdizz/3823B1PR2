#pragma once
#include <vector>
#include <list>
using namespace std;

template <typename TKey, typename TValue> 
class TUnorderedArrayTable {
	struct TTableRec {
		TKey key;
		TValue value;
	};
	vector<TTableRec> data{};
public:
    TUnorderedArrayTable() = default;

	size_t size() const noexcept { return data.size(); }

	TValue& operator[](size_t pos) { return data[pos].value; }

	void remove(TKey key) {
		for (size_t i = 0; i < data.size(); i++) {
			if (data[i].key == key) {
				data[i] = data[data.size() - 1];
				data.pop_back();
				return;
			}
		}
	}

	TValue* find(TKey key) {
		for (auto& val : data) {
			if (val.key == key) {
				return &val.value;
			}
		}
		return nullptr;
	}

	void insert(TKey key, TValue value) {
		if (find(key)) {
			return;
		}
		data.push_back({ key, value });
	}

    void print() const {
		for (const auto& rec : data) {
			cout << rec.key << ":  ";
			rec.value.print();
		}
    }
};

template <typename TKey, typename TValue>
class TUnorderedListTable {
    struct TTableRec {
        TKey key;
        TValue value;
    };

    std::list<TTableRec> data;

public:
    TUnorderedListTable() = default;

    TUnorderedListTable(size_t size) {
        data.resize(size);
    }

    size_t size() const noexcept { return data.size(); }

    TValue* find(TKey key) {
        for (auto& val : data) {
            if (val.key == key) {
                return &val.value;
            }
        }
        return nullptr;
    }

    void insert(TKey key, TValue value) {
        if (find(key)) {
            return;
        }
        data.push_back({ key, value });
    }

    void remove(TKey key) {
        for (auto it = data.begin(); it != data.end(); ++it) {
            if (it->key == key) {
                data.erase(it);
                return;
            }
        }
    }

    void print() const {
        for (const auto& rec : data) {
            cout << rec.key << ":  ";
            rec.value.print();
        }
    }
};
