/*
 * LinkedList.h
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#ifndef LISTS_CHAINLIST_H_
#define LISTS_CHAINLIST_H_

#include "Node.h"
#include <cstddef>
#include <iostream>

template <class T>
class ChainList {
public:
	void prepend(T);
	void append(T);

	T get(int);
	T first();
	T last();

	void remove(int);
	void removeFirst();
	void removeLast();
private:
	Node<T>* head;
	Node<T>* tail;

	Node<T>* search(int);
};

template <class T>
void ChainList<T>::prepend(T value) {
	Node<T>* node = new Node<T>(value);
	node->next = head;
	if (head)
		head->prev = node;
	head = node;
	if (!tail)
		tail = node;
}

template <class T>
void ChainList<T>::append(T value) {
	Node<T>* node = new Node<T>(value);
	node->prev = tail;
	if (tail)
		tail->next = node;
	tail = node;
	if (!head)
		head = node;
}

template <class T>
T ChainList<T>::get(int index) {
	Node<T>* node = search(index);
	if (node)
		return node->value;
	return 0;
}

template <class T>
T ChainList<T>::first() {
	if (head)
		return head->value;
	return 0;
}

template <class T>
T ChainList<T>::last() {
	if (tail)
		return tail->value;
	return 0;
}

template <class T>
void ChainList<T>::remove(int index) {
	Node<T>* node = search(index);
	if (!node)
		return;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	if (node == head)
		head = nullptr;
	if (node == tail)
		tail = nullptr;
	delete node;
}

template <class T>
void ChainList<T>::removeFirst() {
	if (head) {
		head = head->next;
		delete head->prev;
	}
}

template <class T>
void ChainList<T>::removeLast() {
	if (tail) {
		tail = tail->prev;
		delete tail->next;
	}
}

template <class T>
Node<T>* ChainList<T>::search(int index) {
	int i = 0;
	Node<T>* current = head;
	while (current != nullptr) {
		if (i == index)
			return current;
		i++;
		current = current->next;
	}
	return nullptr;
}

#endif /* LISTS_CHAINLIST_H_ */
