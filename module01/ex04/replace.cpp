/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:17:40 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/12 23:36:41 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"



void	replace(char *given_file, char *to_replace, char *replacer)
{
	std::ifstream file (given_file);
	std::ofstream newfile ("output.txt");
	std::ostringstream buffer;
	std::string content;

	newfile << file.rdbuf();
	buffer << file.rdbuf();
	content = buffer.str();
	file.close();
	size_t pos = content.find(to_replace);
	while (pos != std::string::npos)
	{
		content.erase(pos, (pos + strlen(to_replace) - 1));
		content.insert(replacer);
	}
}