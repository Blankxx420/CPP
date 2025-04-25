/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:24:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/01/07 09:39:08 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog*	  dog = new Dog();
	
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << dog->getBrain()->getIdeas()[55] << std::endl;

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
	delete dog;
	index = 0;
	for (; index < 4; index++)
		delete Animalarray[index];
	
	// This will fail because AAnimal is abstract!
	// const Animal a = new Animal();
	return 0;
}