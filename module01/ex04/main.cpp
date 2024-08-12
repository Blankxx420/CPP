/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:52:10 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/12 22:17:15 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main (int argc, char **argv)
{
	if (argc == 4)
		replace(argv[1], argv[2], argv[3]);
	else
		std::cerr << "wrong number of arguments: expected 3 file , pattern to replace , and the replace pattern" << std::endl;
	return (0);
}