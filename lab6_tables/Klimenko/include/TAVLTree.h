#pragma once

template <typename TKey, typename TValue>
class TAVLTree {
    struct TNode {
        TKey key;
        TValue value;
        TNode* pLeft;
        TNode* pRight;
        int height;
        TNode(TKey k, TValue v) {
            key = k;
            value = v;
            pLeft = nullptr;
            pRight = nullptr;
            height = 1;
        }
    };

    TNode* pRoot = nullptr;

    int getHeight(TNode* node) {
        return node ? node->height : 0;
    }

    int getBalanceFactor(TNode* node) {
        return node ? getHeight(node->pLeft) - getHeight(node->pRight) : 0;
    }

    void updateHeight(TNode* node) {
        if (node) {
            node->height = std::max(getHeight(node->pLeft), getHeight(node->pRight)) + 1;
        }
    }

    TNode* rotateRight(TNode* y) {
        TNode* x = y->pLeft;
        y->pLeft = x->pRight;
        x->pRight = y;
        updateHeight(y);
        updateHeight(x);
        return x;
    }

    TNode* rotateLeft(TNode* x) {
        TNode* y = x->pRight;
        x->pRight = y->pLeft;
        y->pLeft = x;
        updateHeight(x);
        updateHeight(y);
        return y;
    }

    TNode* balance(TNode* node) {
        updateHeight(node);
        int balanceFactor = getBalanceFactor(node);

        if (balanceFactor > 1) {
            if (getBalanceFactor(node->pLeft) < 0) {
                node->pLeft = rotateLeft(node->pLeft);
            }
            return rotateRight(node);
        }
        if (balanceFactor < -1) {
            if (getBalanceFactor(node->pRight) > 0) {
                node->pRight = rotateRight(node->pRight);
            }
            return rotateLeft(node);
        }
        return node;
    }

    TNode* insert(TNode* node, TKey key, TValue value) {
        if (node == nullptr) return new TNode(key, value);
        if (key < node->key) node->pLeft = insert(node->pLeft, key, value);
        else if (key > node->key) node->pRight = insert(node->pRight, key, value);
        return balance(node);
    }

    TValue* find(TNode* node, TKey key) {
        if (node == nullptr) return nullptr;
        if (node->key == key) return &node->value;
        if (key < node->key) return find(node->pLeft, key);
        return find(node->pRight, key);
    }

    TNode* findMin(TNode* node) {
        return node->pLeft ? findMin(node->pLeft) : node;
    }

    TNode* removeMin(TNode* node) {
        if (node->pLeft == nullptr) {
            return node->pRight;
        }
        node->pLeft = removeMin(node->pLeft);
        return balance(node);
    }

    TNode* remove(TNode* node, TKey key) {
        if (node == nullptr) return nullptr;

        if (key < node->key) {
            node->pLeft = remove(node->pLeft, key);
        }
        else if (key > node->key) {
            node->pRight = remove(node->pRight, key);
        }
        else {
            TNode* left = node->pLeft;
            TNode* right = node->pRight;
            delete node;
            if (!right) return left;
            TNode* minNode = findMin(right);
            minNode->pRight = removeMin(right);
            minNode->pLeft = left;
            return balance(minNode);
        }
        return balance(node);
    }

    void print(TNode* node) const {
        if (!node) return;
        print(node->pLeft);
        std::cout << node->key << ":    ";
        node->value.print();
        print(node->pRight);
    }

public:
    void insert(TKey key, TValue value) { pRoot = insert(pRoot, key, value); }
    void remove(TKey key) { pRoot = remove(pRoot, key); }
    TValue* find(TKey key) { return find(pRoot, key); }
    void print() const { print(pRoot); }
};