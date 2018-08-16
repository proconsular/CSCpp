/*
 * Node.h
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#ifndef LISTS_NODE_H_
#define LISTS_NODE_H_

template <class T> class Node {
public:
	Node(T value) {
		this->value = value;
		this->prev = 0;
		this->next = 0;
	}

	Node<T>* prev;
	Node<T>* next;
	T value;
};

#endif /* LISTS_NODE_H_ */
