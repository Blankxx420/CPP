/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 09:49:18 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/20 11:17:06 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	srand((unsigned int) time(NULL));
	Base * null_ptr = NULL;
	std::cout << "\n=== Testing with generated objects ===" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\nTest " << i+1 << ":" << std::endl;
		Base *random_ptr1 = generate();
		Base *random_ptr2 = generate();
		
		std::cout << "Identification by pointer:" << std::endl;
		identify(random_ptr1);
		identify(random_ptr2);
		
		std::cout << "Identification by reference:" << std::endl;
		identify(*random_ptr1);
		identify(*random_ptr2);
		
		delete random_ptr1;
		delete random_ptr2;
	}
	
	std::cout << "\n=== Testing NULL pointer ===" << std::endl;
	identify(null_ptr);
	
	// identify(*null_ptr);  // crash
	
	return 0;
}