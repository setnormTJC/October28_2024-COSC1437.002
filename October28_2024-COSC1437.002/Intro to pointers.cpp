// October28_2024-COSC1437.002.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


int main()
{
	int anInteger = 32; 

	int* ptrToAnInteger; //this declares a pointer to an integer value
	ptrToAnInteger = &anInteger; 

	cout << ptrToAnInteger << "\n";
						//SINGLE ampersand means "get the address of" when it is a UNARY operator 
						//& -> means bitwise AND when it is a BINARY operator
					//&& -> means logical AND when it is BINARY 

	*ptrToAnInteger = 111'111; //the asterisk when used in this way is called the "dereferencing operator" 
	//dereference means "get the contents of" 
	cout << "anInteger has become: " << anInteger << "\n";
	cout << "By using the dereferencing operator: " << *ptrToAnInteger << "\n";

}
