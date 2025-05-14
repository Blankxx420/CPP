
#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	try
	{
		// Test du constructeur par défaut
		std::cout << "Test du constructeur par défaut:" << std::endl;
		Array<int> emptyArray;
		std::cout << "Taille: " << emptyArray.size() << std::endl;
		
		// Test du constructeur avec taille
		std::cout << "\nTest du constructeur avec taille:" << std::endl;
		Array<int> intArray(5);
		std::cout << "Taille: " << intArray.size() << std::endl;
		std::cout << "Valeurs par défaut:" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}
		
		// Modification des valeurs
		std::cout << "\nModification des valeurs:" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			intArray[i] = i * 10;
		}
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}
		
		// Test du constructeur par copie
		std::cout << "\nTest du constructeur par copie:" << std::endl;
		Array<int> copyArray(intArray);
		std::cout << "Taille de la copie: " << copyArray.size() << std::endl;
		std::cout << "Valeurs de la copie:" << std::endl;
		for (unsigned int i = 0; i < copyArray.size(); ++i)
		{
			std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
		}
		
		// Vérification que la modification de la copie n'affecte pas l'original
		std::cout << "\nModification de la copie:" << std::endl;
		copyArray[2] = 999;
		std::cout << "copyArray[2] = " << copyArray[2] << std::endl;
		std::cout << "intArray[2] = " << intArray[2] << std::endl;
		
		// Test de l'opérateur d'assignation
		std::cout << "\nTest de l'opérateur d'assignation:" << std::endl;
		Array<int> assignArray;
		assignArray = intArray;
		std::cout << "Taille après assignation: " << assignArray.size() << std::endl;
		std::cout << "Valeurs après assignation:" << std::endl;
		for (unsigned int i = 0; i < assignArray.size(); ++i)
		{
			std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;
		}
		
		// Vérification que la modification après assignation n'affecte pas l'original
		std::cout << "\nModification après assignation:" << std::endl;
		assignArray[3] = 777;
		std::cout << "assignArray[3] = " << assignArray[3] << std::endl;
		std::cout << "intArray[3] = " << intArray[3] << std::endl;
		
		// Test avec un autre type (string)
		std::cout << "\nTest avec des strings:" << std::endl;
		Array<std::string> stringArray(3);
		stringArray[0] = "Hello";
		stringArray[1] = "World";
		stringArray[2] = "!";
		for (unsigned int i = 0; i < stringArray.size(); ++i)
		{
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
		}
		
		// Test de l'exception pour index hors limites
		std::cout << "\nTest de l'exception pour index hors limites:" << std::endl;
		try
		{
			std::cout << "Tentative d'accès à intArray[10] (hors limites)..." << std::endl;
			std::cout << intArray[10] << std::endl;
			std::cout << "Ce message ne devrait pas s'afficher!" << std::endl;
		} catch (const std::exception& e)
		{
			std::cout << "Exception attrapée comme prévu!" << std::endl;
		}
		
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception non prévue: " << e.what() << std::endl;
	}
	return 0;
}