/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:46:14 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:46:16 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	
	public:
		WrongCat();
		WrongCat(const WrongCat &cpy);
		~WrongCat();
		WrongCat& operator = (const WrongCat &Cat);

		void	makeSound(void) const;	
};
#endif