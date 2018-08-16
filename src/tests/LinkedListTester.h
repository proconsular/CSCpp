/*
 * LinkedListTester.h
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#ifndef TESTS_LINKEDLISTTESTER_H_
#define TESTS_LINKEDLISTTESTER_H_

class LinkedListTester {
public:
	bool run();
private:
	bool testPrepend();
	bool testGet();
	bool testRemove();
	bool testRemoveFirst();
	bool testRemoveLast();
	bool testAppend();
};

#endif /* TESTS_LINKEDLISTTESTER_H_ */
