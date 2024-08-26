/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:00:06 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 22:16:11 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	private:

	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &cpy);
		~Animal();
		Animal& operator = (const Animal &animal);

		void	setType(std::string value);
		std::string	getType( void );
		virtual void	MakeSound( void );
};

#endif