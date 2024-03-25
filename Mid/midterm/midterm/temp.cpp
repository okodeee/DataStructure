#include <iostream>
#include <string>
#include "NStack.h"

using namespace std;

int	main()
{
	NStack	myStack;
	string	myStr;

	myStack.nmPush(0, 0, "ABC");
	myStack.nmPush(0, 0, "DEF");
	myStack.nmPush(1, 0, "abc");
	myStack.nmPush(3, 0, "123");
	myStack.nmPush(3, 1, "456");
	myStack.nmPush(8, 7, "777");
	myStack.nmPush(0, 0, "XYZ");
	myStack.nmPush(5, 2, "888");
	myStack.print("Main");
}