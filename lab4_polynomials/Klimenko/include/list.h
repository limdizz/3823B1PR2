#include <iostream>
#include "node.h"

#pragma once
template <typename T>
class List
{
	Node<T>* head;
	size_t size;
public:
	List() {
		head = nullptr;
		size = 0;
	}

	List(const List& a) {
		head = nullptr;
		size = 0;
		Node<T>* current = a.head;
		while (current) {
			insert(current->data, size);
			current = current->next;
		}
	}

	~List() {
		while (head) {
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	void insert(T value, size_t n) {
		if (n > size) {
			throw std::out_of_range("Index out of range");
		}
		Node<T>* newNode = new Node<T>(value);
		if (n == 0) {
			newNode->next = head;
			head = newNode;
		}
		else {
			Node<T>* current = head;
			for (size_t i = 0; i < n - 1; ++i) {
				current = current->next;
			}
			newNode->next = current->next;
			current->next = newNode;
		}
		++size;
	};

	size_t getSize() const { return size; };

	Node<T>* getHead() { return head; }

	void remove(size_t n) {
		if (n >= size) {
			throw std::out_of_range("Index out of range");
		}

		Node<T>* toDelete = nullptr;
		if (n == 0) {
			toDelete = head;
			head = head->next;
		}
		else {
			Node<T>* current = head;
			for (size_t i = 0; i < n - 1; ++i) {
				current = current->next;
			}
			toDelete = current->next;
			current->next = toDelete->next;
		}
		delete toDelete;
		--size;
	}

	T valueSearch(size_t n) const {
		if (n >= size) {
			throw std::out_of_range("Index out of range");
		}
		Node<T>* current = head;
		for (size_t i = 0; i < n; i++) {
			current = current->next;
		}
		return current->data;
	};

	bool isEmpty() const {
		return head == nullptr;
	}

	T& operator[](size_t n) {
		if (n >= size) {
			throw std::out_of_range("Index out of range");
		}
		Node<T>* current = head;
		for (size_t i = 0; i < n; i++) {
			current = current->next;
		}
		return current->data;
	}
};
