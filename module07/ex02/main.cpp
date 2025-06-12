
#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	try
	{
		std::cout << "Default constructor test:" << std::endl;
		Array<int> emptyArray;
		std::cout << "Size: " << emptyArray.size() << std::endl;
		
		std::cout << "\nSize constructor test:" << std::endl;
		Array<int> intArray(5);
		std::cout << "Size: " << intArray.size() << std::endl;
		std::cout << "Default value:" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}
		
		std::cout << "\nModification of values :" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			intArray[i] = i * 10;
		}
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}
		
		std::cout << "\n Copie constructor:" << std::endl;
		Array<int> copyArray(intArray);
		std::cout << "Size of copie: " << copyArray.size() << std::endl;
		std::cout << "Values of copie:" << std::endl;
		for (unsigned int i = 0; i < copyArray.size(); ++i)
		{
			std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
		}
		std::cout << "\nModification of copie:" << std::endl;
		copyArray[2] = 999;
		std::cout << "copyArray[2] = " << copyArray[2] << std::endl;
		std::cout << "intArray[2] = " << intArray[2] << std::endl;
		std::cout << "\nTest de l'opérateur d'assignation:" << std::endl;
		Array<int> assignArray;
		assignArray = intArray;
		std::cout << "Size after assignation: " << assignArray.size() << std::endl;
		std::cout << "Values after assignation:" << std::endl;
		for (unsigned int i = 0; i < assignArray.size(); ++i)
		{
			std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;
		}
		
		std::cout << "\nModification after assignation:" << std::endl;
		assignArray[3] = 777;
		std::cout << "assignArray[3] = " << assignArray[3] << std::endl;
		std::cout << "intArray[3] = " << intArray[3] << std::endl;

		std::cout << "\nStrings test:" << std::endl;
		Array<std::string> stringArray(3);
		stringArray[0] = "Hello";
		stringArray[1] = "World";
		stringArray[2] = "!";
		for (unsigned int i = 0; i < stringArray.size(); ++i)
		{
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
		}
		try
		{
			std::cout << "try to acces past size" << std::endl;
			std::cout << intArray[10] << std::endl;
			std::cout << "error" << std::endl;
		} catch (const std::exception& e)
		{
			std::cout << "Exception catch" << std::endl;
		}
		
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception unexpected" << e.what() << std::endl;
	}
	return 0;
}