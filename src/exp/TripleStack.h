/*
 * TripleStack.h
 *
 *  Created on: Aug 15, 2018
 *      Author: chrisluttio
 */

#ifndef EXP_TRIPLESTACK_H_
#define EXP_TRIPLESTACK_H_

class TripleStack {
public:
	TripleStack(int);
	~TripleStack();

	void push(int, int);
	int pop(int);

	int* data;
private:
	int size;


	int si[3];
	int so[3];
};

#endif /* EXP_TRIPLESTACK_H_ */
