/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:17:40 by brguicho          #+#    #+#             */
/*   Updated: 2024/11/18 10:01:35 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(char *filename, std::string to_replace, std::string replacer)
{
	std::ifstream		file;
	std::string			infile;
	std::string			outfile;
	std::ofstream 		newfile;
	std::ostringstream	buffer;
	std::string 		content;
	size_t 				pos = 0;

	infile = filename;
	outfile = infile + ".replace";
	
	file.open(filename);
	if (file.is_open() == true)
	{
		buffer << file.rdbuf();
		content = buffer.str();
		file.close();
	}
	else
	{	
		std::cerr << "Infile open error" << std::endl;
		return ;
	}
	newfile.open(outfile.c_str(), std::ios::out);
	if (newfile.is_open() == true)
	{
		while ((pos = content.find(to_replace, pos)) != std::string::npos)
		{
			content.erase(pos, to_replace.length());
			content.insert(pos, replacer);
			pos += replacer.length();
		}
		newfile << content;
		newfile.close();	
	}
	else
	{	std::cerr << "Outfile open error" << std::endl;
		newfile.close();
		return ;
	}
}