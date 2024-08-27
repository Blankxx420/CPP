/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:49:17 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 13:47:18 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string *_ideas;
	
	public:
		
		Brain();
		Brain(Brain &cpy);
		~Brain();
		Brain& operator = (const Brain &brain);

		std::string * getIdeas(void);
};
#endif