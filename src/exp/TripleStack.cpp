/*
 * TripleStack.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#include "TripleStack.h"
#include <iostream>

TripleStack::TripleStack(int size) {
	this->size = size;
	this->data = new int[size];

	for (int i = 0; i < size; i++)
		data[i] = 0;

	for (int i = 0; i < 3; i++) {
		si[i] = 0;
		so[i] = size * i / 3;
	}
}

TripleStack::~TripleStack() {
	delete[] data;
}

void TripleStack::push(int stk, int x) {
	int index = si[stk] + so[stk];
	if (index >= size)
		return;
	if (stk < 2)
		if (index >= so[stk + 1])
			return;
	data[index] = x;
	si[stk]++;
}

int TripleStack::pop(int stk) {
	if (si[stk] - 1 >= 0)
		si[stk]--;
	return data[si[stk] + so[stk]];
}

