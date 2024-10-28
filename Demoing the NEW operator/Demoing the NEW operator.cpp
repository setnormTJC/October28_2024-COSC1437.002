// Demoing the NEW operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


int main()
{
	string a = "123abc";
	string* pointerToA = &a;

	//the NEW operator returns a memory address AND it "dynamically" allocates memory on "the heap" 

	//two types of memory accessible to our program: 
	//1) "stack memory" 
	//2) "heap memory" 

	//if your program requires more memory than what is provided by "the stack", you can use NEW 


	//int cStyleStaticArray[5] = { 11, 22, 33, 44, 55 };


	//int* ptr = cStyleStaticArray; 
	//ptr++; 
	//ptr++; 

	//cout << "Is it 33? " << *ptr << "\n";

	//someNums++; 

	cout << "Enter the number of NUMBERS on your ...number list ...\n";
	int itemCount;
	std::cin >> itemCount;

	//string groceryListItems[itemCount];

	int* pointerToBeginningOfGroceryList = new int[itemCount];

	int* copyOfBeginningPointer = pointerToBeginningOfGroceryList;

	//malloc() //analogous to NEW in C++ 
	//	free() //analogous to DELETE in C++ 

	//delete //used for prevention of memory "leaks" 

	for (int i = 0; i < itemCount; ++i)
	{
		cout << "Enter the " << i << "th/st/nd/ird number \n";
		int currentItem;

		std::cin >> currentItem;

		//pointerToBeginningOfNumberList[i] = currentNumber;

		*pointerToBeginningOfGroceryList = currentItem;

		pointerToBeginningOfGroceryList++;
	}
	//pointerToBeginningOfGroceryList--; 
	//pointerToBeginningOfGroceryList--;
	//pointerToBeginningOfGroceryList--;
	//pointerToBeginningOfGroceryList--;

	cout << "(Dynamic) list contains: \n";
	for (int i = 0; i < itemCount; ++i)
	{
		cout << copyOfBeginningPointer[i] << "\n";
	}

	//delete []  pointerToBeginningOfNumberList;


	//cout << "The list contains the following:\n";
	//for (int i = 0; i < itemCount; ++i)
	//{
	//	cout << 
	//}

	//vector<string> 




}
