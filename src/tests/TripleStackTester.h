/*
 * TripleStackTester.h
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#ifndef TESTS_TRIPLESTACKTESTER_H_
#define TESTS_TRIPLESTACKTESTER_H_

#include "../exp/TripleStack.h"
#include <iostream>

using namespace std;

class TripleStackTester {
public:
	bool run();
private:
	bool testPush();
	bool testFullPush();
	bool testPop();
};

void printData(int* data) {
	for (int i = 0; i < 30; i++)
		cout << data[i] << ",";
	cout << endl;
}

bool TripleStackTester::run() {

	cout << "push()" << endl;
	if (!testPush())
		return false;

	cout << "multi push()" << endl;
	if (!testFullPush())
		return false;

	cout << "pop()" << endl;
	if (!testPop())
		return false;

	return true;
}

bool TripleStackTester::testPush() {
	TripleStack* stack = new TripleStack(30);

	stack->push(0, 4);
	stack->push(0, 3);
	stack->push(1, 10);
	stack->push(2, 21);

	if (stack->data[0] != 4 || stack->data[1] != 3)
		return false;

	if (stack->data[10] != 10)
		return false;

	if (stack->data[20] != 21)
		return false;

	delete stack;

	return true;
}

bool TripleStackTester::testFullPush() {
	TripleStack* stack = new TripleStack(30);

	for (int i = 0; i < 16; i++)
		stack->push(0, i);

	for (int i = 0; i < 16; i++)
		stack->push(2, i);

	for (int i = 0; i < 16; i++)
		stack->push(1, i);

	if (stack->data[10] != 0)
		return false;

	if (stack->data[9] != 9)
		return false;

	if (stack->data[21] != 1)
		return false;

	if (stack->data[29] != 9)
		return false;

	if (stack->data[15] != 5)
		return false;

	delete stack;
	return true;
}

bool TripleStackTester::testPop() {
	TripleStack* stack = new TripleStack(30);

	for (int i = 0; i < 10; i++)
		stack->push(0, i);

	for (int i = 0; i < 10; i++)
		stack->push(1, i);

	if (stack->data[19] != 9)
		return false;

	if (stack->pop(1) != 9)
		return false;

	if (stack->pop(1) != 8)
		return false;

	if (stack->pop(0) != 9)
		return false;

	if (stack->pop(0) != 8)
		return false;

	stack->push(0, 3);

	if (stack->pop(0) != 3)
		return false;

	delete stack;
	return true;
}



#endif /* TESTS_TRIPLESTACKTESTER_H_ */
