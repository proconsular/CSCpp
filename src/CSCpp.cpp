//============================================================================
// Name        : CSCpp.cpp
// Author      : Chris Luttio
// Version     :
// Copyright   : Copyright 2018 Chris Luttio
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "tests/LinkedListTester.h"
#include "tests/TripleStackTester.h"

int main() {
	LinkedListTester tester;
	TripleStackTester stester;

	cout << "## Tests Started ##" << endl << endl;

	bool lpassed = tester.run();

	cout << endl << (lpassed ? "## SUCCEEDED ##" : "## FAILED ##") << endl << endl;

	bool spassed = stester.run();

	cout << endl << (spassed ? "## SUCCEEDED ##" : "## FAILED ##") << endl << endl;


	cout << "## Completed ##" << endl;

	return 0;
}
