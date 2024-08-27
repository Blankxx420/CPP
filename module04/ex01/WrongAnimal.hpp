/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:44:50 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:44:52 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	private:

	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &cpy);
		~WrongAnimal();
		WrongAnimal& operator = (const WrongAnimal &animal);
		
		void		setType(std::string value);
		std::string		getType( void ) const;
		void	makeSound( void )const;
};


#endif