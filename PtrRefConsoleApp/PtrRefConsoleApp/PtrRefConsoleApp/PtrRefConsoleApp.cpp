// PtrRefConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;

void printVals()
{
	std::cout << "Values:" << std::endl;
	std::cout << "val: " << val << " val2: " << val2 << " valPtr: " << *valPtr << " valRef: " << valRef << std::endl;
	std::cout << std::endl;
	std::cout << "References:" << std::endl;
	std::cout << "val: " << &val << " val2: " << &val2 << " valPtr: " << valPtr << " valRef: " << &valRef << std::endl;
	std::cout << std::endl << std::endl;
}

int main()
{
	printVals();
	valPtr = &val2;
	printVals();
	*valPtr = 3;
	printVals();
	valRef = 4;
	printVals();
    return 0;
}

