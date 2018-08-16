/*
 * LinkedListTester.cpp
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#include "LinkedListTester.h"

#include "../lists/ChainList.h"
#include <iostream>

using namespace std;

bool LinkedListTester::run() {

	cout << "Prepend()" << endl;
	if (!testPrepend())
		return false;

	cout << "Get()" << endl;
	if (!testGet())
		return false;

	cout << "Remove()" << endl;
	if (!testRemove())
		return false;

	cout << "RemoveFirst()" << endl;
	if (!testRemoveFirst())
		return false;

	cout << "RemoveLast()" << endl;
	if (!testRemoveLast())
		return false;

	cout << "Append()" << endl;
	if (!testAppend())
		return false;

	return true;
}

bool LinkedListTester::testPrepend() {
	ChainList<int>* list = new ChainList<int>();

	list->prepend(4);

	if (list->first() != 4)
		return false;

	list->prepend(10);
	list->prepend(3);

	if (list->first() != 3)
		return false;

	delete list;

	return true;
}

bool LinkedListTester::testGet() {
	ChainList<int>* list = new ChainList<int>();

	list->prepend(4);
	list->prepend(10);
	list->prepend(24);
	list->prepend(1);

	if (list->get(2) != 10)
		return false;

	if (list->get(1) != 24)
		return false;

	list->prepend(6);

	if (list->get(4) != 4)
		return false;

	delete list;

	return true;
}

bool LinkedListTester::testRemove() {
	ChainList<int>* list = new ChainList<int>();

	list->prepend(4);
	list->prepend(10);
	list->prepend(11);

	if (list->get(1) != 10)
		return false;

	list->remove(1);

	if (list->get(1) != 4)
		return false;

	return true;
}

bool LinkedListTester::testRemoveFirst() {
	ChainList<int>* list = new ChainList<int>();

	list->prepend(4);
	list->prepend(10);

	if (list->first() != 10)
		return false;

	list->removeFirst();

	if (list->first() != 4)
		return false;

	return true;
}

bool LinkedListTester::testRemoveLast() {
	ChainList<string>* list = new ChainList<string>();

	list->prepend("tim");
	list->prepend("ron");

	if (list->get(1) != "tim")
		return false;

	list->removeLast();

	if (list->last() != "ron")
		return false;

	return true;
}

bool LinkedListTester::testAppend() {
	ChainList<int>* list = new ChainList<int>();

	list->append(3);
	list->append(10);
	list->append(4);

	if (list->first() != 3)
		return false;

	if (list->last() != 4)
		return false;

	return true;
}












