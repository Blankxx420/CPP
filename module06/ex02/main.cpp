/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 09:49:18 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/09 10:44:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	srand(time(NULL));
	Base * null_ptr = NULL;
	for (int i = 0; i < 5; i++)
	{
		Base * random_ptr1;
		Base * random_ptr2;
		random_ptr1 = generate();
		random_ptr2 = generate();
		
		std::cout << "identification by pointer" << std::endl;
		identify(random_ptr1);
		identify(random_ptr2);
		
		std::cout << "indentification by reference" << std::endl;
		identify(*random_ptr1);
		identify(*random_ptr2);
		delete random_ptr1, random_ptr2;
	}
	identify(null_ptr);
	identify(*null_ptr);
	
}