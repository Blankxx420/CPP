/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:17:40 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/13 22:09:03 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(char *filename, std::string to_replace, std::string replacer)
{
	std::ifstream		file (filename);
	std::ofstream 		newfile ("output.txt");
	std::ostringstream	buffer;
	std::string 		content;
	size_t 				pos = 0;

	buffer << file.rdbuf();
	content = buffer.str();
	file.close();
	while ((pos = content.find(to_replace, pos)) != std::string::npos)
	{
		content.erase(pos, to_replace.length());
		content.insert(pos, replacer);
		pos += replacer.length();
	}
	newfile << content;
	newfile.close();
}