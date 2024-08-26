/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:02:18 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:17:48 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		Cat& operator = (const Cat &Cat);

		void	makeSound(void) const;	
};
#endif