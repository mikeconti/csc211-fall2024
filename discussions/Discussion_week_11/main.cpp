// Main program to show Intvector and Vector usage
// by David Perrone 2021

#include <iostream>
#include <vector>

#include "IntVector.h"
#include "Vector.h"
#include <string>


// templated print function for any type
template <typename T>
void Print(const T& value)
{
	std::cout << value << '\n';
}

// templated print function for any number of any type
template <typename T, typename ... Args>
void Print(const T& value, Args&&... args)
{
	std::cout << value << ' ';
	Print(args...);
}


void Print(const IntVector& vec)
{
	for (int i = 0; i < vec.GetLength(); i++)
	{
		std::cout << vec[i];
	}
}

int main()
{
	int x = 5;
	float f = 3.005f;
	std::string name = "David";
	Print("The value of x is ", x, "f value: ", f, "my name is ", name);

	Print("\n----------------------------------------\n");


	{
		Vector<int> vec;
		vec.PushBack(5);
		vec.PushBack(4);
		vec.PushBack(6);
		vec.PushBack(7);
		vec.PushBack(9);

		for (int i = 0; i < vec.GetLength(); i++)
		{
			Print(vec[i]);
		}
	}

	Print("\n----------------------------------------\n");
	{
		Vector<double> doubleVec;
		doubleVec.PushBack(1.1);
		doubleVec.PushBack(2.5);
		doubleVec.PushBack(3.6);
		doubleVec.PushBack(4.7);

		for (int i = 0; i < doubleVec.GetLength(); i++)
		{
			Print(doubleVec[i]);
		}
	}
	
	Print("\n----------------------------------------\n");

	

	Vector<std::string> strVec;
	strVec.PushBack("hello");
	strVec.PushBack("world");
	strVec.PushBack("othejr ");
	strVec.PushBack("stuff");

	for (int i = 0; i < strVec.GetLength(); i++)
	{
		Print(strVec[i]);
	}		
}