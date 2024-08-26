/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:42:42 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:38:48 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();
		Dog& operator = (const Dog &dog);

		void	makeSound(void) const;
};
#endif