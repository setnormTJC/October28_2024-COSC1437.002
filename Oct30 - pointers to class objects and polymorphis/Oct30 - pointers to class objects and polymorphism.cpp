// Oct30 - pointers to class objects and polymorphis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


class Shape
{
	string attrib1; 
	string attrib2;
	string attrib3;

	double area; 

public: 
	virtual void show() //virtual -> this means "can be overridden" 
	{
		//? 
		system("questionMark.svg"); //uses MATH to store image rather than RGB values 
	}

	virtual void doShapeThing() = 0; 
};

class Triangle : public Shape
{
	//double area; 

public: 
	void show() override
	{
		system("triangle.png");
	}
};

//system("questionMark.svg");
//system("circle.jpg");
//system("triangle.png");

class Circle : public Shape
{
public:
	void show()
	{
		system("circle.jpg"); //also uses "math" (because it is a compressed image format) 
							//the compression algorithm is related to a "discrete cosine transform" 
	};
};

void callShowShape(Shape* pointerToAShapeObject)
{
	pointerToAShapeObject->show(); 
}

int main()
{
	//int double 
	//cout << "A shape object requires this many Bytes in RAM: " << sizeof(Shape) << "\n";
	//cout << "A POINTER TO a shape object requires this many Bytes in RAM: " << sizeof(Shape*) << "\n";

	//Triangle t; 
	//t.show(); 

	//int a = 32; 
	//int* ptrToA = &a; 
	
	//cout << ptrToA << "\n";
	//cout << *ptrToA << "\n"; //dereferences the pointer 
	/*if (!age > 55)*/
	Shape* ptrToShape = new Shape; //dynamically allocates memory for a Shape object 
	//ptrToShape->show(); //the arrow operator is needed for calling member functions on POINTERS to objects 
	//(*s).show(); //this is an alternative syntax to the arrow operator  

	//callShowShape(ptrToShape);

	Triangle t; 
	Triangle* ptrToTriangle = &t; 

	callShowShape(ptrToTriangle); 


	//s.show(); 
	//int a = 123; 
	//int* ptrToAnInt = &a; 

	//string* double* char*
	//int* ptrToSomeOtherInt = new int; 

	//int bigArray[1'000'000'0];

	//cout << "Enter the size of the array that you want: \n";
	//int desiredArraySize; 
	//std::cin >> desiredArraySize; 
	//int* ptrToAnARRAYOfInts = new int[desiredArraySize]; 

	//Car myCar; 
	//Car* otherCarPtr = &myCar; 

	//Car* carPtr = new Car; 
	

}
