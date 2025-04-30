#pragma once

template <typename TKey, typename TValue>
class TOrderedTable {
    struct TNode {
        TKey key;
        TValue value;
        TNode* pLeft;
        TNode* pRight;
        TNode(TKey k, TValue v) {
            key = k;
            value = v;
            pLeft = nullptr;
            pRight = nullptr;
        }
    };
    TNode* pRoot = nullptr;

    void insert(TNode*& node, TKey key, TValue value) {
        if (node == nullptr) {
            node = new TNode(key, value);
            return;
        }
        if (key < node->key) insert(node->pLeft, key, value);
        else if (key > node->key) insert(node->pRight, key, value);
    }

    TValue* find(TNode* pNode, TKey key) {
        if (pNode == nullptr) return nullptr;
        if (pNode->key == key) return &pNode->value;
        if (key < pNode->key) return find(pNode->pLeft, key);
        return find(pNode->pRight, key);
    }

    TNode* findMin(TNode* node) {
        return node->pLeft ? findMin(node->pLeft) : node;
    }

    void print(TNode* p) const {
        if (p == nullptr) return;
        print(p->pLeft);
        std::cout << p->key << ":    ";
        p->value.print();
        print(p->pRight);
    }

    TNode* remove(TNode* pNode, TKey key) {
	if (pNode == nullptr) return nullptr;
	if (key < pNode->key) {
		pNode->pLeft = remove(pNode->pLeft, key);
	}
	else if (key > pNode->key) {
		pNode->pRight = remove(pNode->pRight, key);
	}
	else {
		if (!pNode->pLeft) {
			TNode* temp = pNode->pRight;
			delete pNode;
			return temp;
		}
		else if (!pNode->pRight) {
			TNode* temp = pNode->pLeft;
			delete pNode;
			return temp;
		}
		else {
			TNode* temp = findMin(pNode->pRight);
            pNode->key = temp->key;
            pNode->value = temp->value;
            pNode->pRight = remove(pNode->pRight, temp->key);
		}
	}
	return pNode;
}

public:
    void insert(TKey key, TValue value) { insert(pRoot, key, value); }
    TValue* find(TKey key) { return find(pRoot, key); }
    void remove(TKey key) { pRoot = remove(pRoot, key); }
    void print() const { print(pRoot); }
};
