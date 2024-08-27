/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:24:41 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 22:04:23 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	const Animal *Animalarray[4];
	int index = 0;
	for ( ; index < 2; index++)
		Animalarray[index] = new Dog();
	for ( ; index < 4; index++)
		Animalarray[index] = new Cat();
	
	index = 0;
	for (; index < 4; index++)
	{
		Animalarray[index]->getType();
		Animalarray[index]->makeSound();
	}
	delete meta;
	delete i;
	delete j;
	index = 0;
	for (; index < 4; index++)
		delete Animalarray[index];
	return 0;
}