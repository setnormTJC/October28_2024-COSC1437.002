// Demoing memory leaks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

int main()
{
    //std::make_unique //this is a function in <memory> that makes a "smart pointer" (no memory leaks) 
    //while (true)
    //{
    //    int* ptr = new int; //"naked new" 

    //    delete ptr; //DEALLOCATES the 4 Bytes just allocated to ptr
    //}
    //
    int* ptrToInt = new int; 
    delete ptrToInt; 
    //vector<int> 
    //delete ptrToInt;
}
