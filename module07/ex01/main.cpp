#include <iostream>
#include <string>
#include "iter.hpp"

void printInt(int n)
{
	std::cout << n << " ";
}

void printChar(char c)
{
	std::cout << c << " ";
}

template<typename T>
void print(T const &x)
{
	std::cout << x << " ";
}

void incrementInt(int &n)
{
	n += 1;
}

int main()
{
	int intArray[5] = {1, 2, 3, 4, 5};
	std::cout << "Array of int: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	char charArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	std::cout << "Array of char: ";
	iter(charArray, 5, printChar);
	std::cout << std::endl;

	std::string strArray[3];
	strArray[0] = "C++";
	strArray[1] = "is";
	strArray[2] = "fun";
	std::cout << "Array of string ";
	iter(strArray, 3, print<std::string>);
	std::cout << std::endl;

	std::cout << "Int array before modification: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;
	
	iter(intArray, 5, incrementInt);
	
	std::cout << "Int array after modification: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	return 0;
}