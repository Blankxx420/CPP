/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:26:59 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/18 23:28:28 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::cout << "Test avec MutantStack :" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "Size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Contenu (du bas vers le haut): ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Contenu (du haut vers le bas): ";
	for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	MutantStack<int> s(mstack);
	std::cout << "La copie est-elle égale ? " << (s.size() == mstack.size() ? "Oui" : "Non") << std::endl;
	
	std::cout << "\nTest avec std::list:" << std::endl;
	std::list<int> lst;
	
	lst.push_back(5);
	lst.push_back(17);
	
	std::cout << "Back: " << lst.back() << std::endl;
	
	lst.pop_back();
	
	std::cout << "Size: " << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	
	std::cout << "Contenu (du bas vers le haut): ";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Contenu (du haut vers le bas): ";
	for (std::list<int>::reverse_iterator it = lst.rbegin(); it != lst.rend(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	return 0;
}