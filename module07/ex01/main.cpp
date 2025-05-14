#include <iostream>
#include <string>
#include "iter.hpp"  // Je suppose que votre template est dans ce fichier

// Fonction pour afficher un int
void printInt(int n)
{
	std::cout << n << " ";
}

// Fonction pour afficher un char
void printChar(char c)
{
	std::cout << c << " ";
}

// Fonction template pour afficher n'importe quel type
template<typename T>
void print(T const &x)
{
	std::cout << x << " ";
}

// Fonction pour modifier un int
void incrementInt(int &n)
{
	n += 1;
}

int main()
{
	int intArray[5] = {1, 2, 3, 4, 5};
	std::cout << "Tableau d'entiers: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	char charArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	std::cout << "Tableau de caractères: ";
	iter(charArray, 5, printChar);
	std::cout << std::endl;

	std::string strArray[3];
	strArray[0] = "C++";
	strArray[1] = "is";
	strArray[2] = "fun";
	std::cout << "Tableau de strings: ";
	iter(strArray, 3, print<std::string>);
	std::cout << std::endl;

	std::cout << "Tableau d'entiers avant modification: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;
	
	iter(intArray, 5, incrementInt);
	
	std::cout << "Tableau d'entiers après modification: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	return 0;
}