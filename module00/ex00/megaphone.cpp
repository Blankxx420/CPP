/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:06:23 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/08 22:19:23 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
	int 	j;
	char	c;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			j = 0;
			for (j; argv[i][j]; j++)
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