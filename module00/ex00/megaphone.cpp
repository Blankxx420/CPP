/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:06:23 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/12 20:38:56 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	char	c;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				if (islower(argv[i][j]))
					c = toupper(argv[i][j]);
				else
					c = argv[i][j];
				std::cout << c;
			}
			if (argv[i + 1] == NULL)
				std::cout << std::endl;
		}
	}
	return (0);		
}