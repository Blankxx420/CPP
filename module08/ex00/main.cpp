/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:08:52 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/13 16:43:41 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include "easyfind.hpp"

void testVector()
{
	std::cout << "\n=== Test avec std::vector ===" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	try {
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::vector<int>::iterator begin = vec.begin();
		int position = 0;
		while (begin != it)
		{
			++begin;
			++position;
		}
		std::cout << "Élément 3 trouvé à la position: "<< position << std::endl;;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur: " << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 10);
		(void) it;
		std::cout << "Élément 10 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur attendue pour l'élément 10: " << e.what() << std::endl;
	}
}

void testList()
{
	std::cout << "\n=== Test avec std::list ===" << std::endl;
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 30);
		(void) it;
		std::cout << "Élément 30 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur: " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator it = easyfind(lst, 60);
		(void) it;
		std::cout << "Élément 60 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur attendue pour l'élément 60: " << e.what() << std::endl;
	}
}

void testDeque()
{
	std::cout << "\n=== Test avec std::deque ===" << std::endl;
	std::deque<int> dq;
	dq.push_back(5);
	dq.push_back(15);
	dq.push_back(25);
	dq.push_back(35);
	dq.push_back(45);
	try
	{
		std::deque<int>::iterator it = easyfind(dq, 25);
		std::deque<int>::iterator begin = dq.begin();
		int position = 0;
		while (begin != it)
		{
			++begin;
			++position;
		}
		std::cout << "Élément 25 trouvé à la position: "<< position << std::endl;;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur: " << e.what() << std::endl;
	}
	try
	{
		std::deque<int>::iterator it = easyfind(dq, 100);
		(void) it;
		std::cout << "Élément 100 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur attendue pour l'élément 100: " << e.what() << std::endl;
	}
}

void testSet() {
	std::cout << "\n=== Test avec std::set ===" << std::endl;
	std::set<int> s;
	s.insert(2);
	s.insert(4);
	s.insert(6);
	s.insert(8);
	s.insert(10);
	try
	{
		std::set<int>::iterator it = easyfind(s, 6);
		(void) it;
		std::cout << "Élément 6 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur: " << e.what() << std::endl;
	}
	try
	{
		std::set<int>::iterator it = easyfind(s, 7);
		(void) it;
		std::cout << "Élément 7 trouvé" << std::endl;
	}
	catch (const NotFoundException& e)
	{
		std::cerr << "Erreur attendue pour l'élément 7: " << e.what() << std::endl;
	}
}

int main() {
	std::cout << "=== Tests de la fonction easyfind ===" << std::endl;
	
	testVector();
	testList();
	testDeque();
	testSet();
	
	return 0;
}