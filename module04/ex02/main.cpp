/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:24:41 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 23:44:28 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();

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
	delete i;
	delete j;
	index = 0;
	for (; index < 4; index++)
		delete Animalarray[index];
	
	// This will fail because AAnimal is abstract!
	// const Animal a = new Animal();
	return 0;
}