/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:48:58 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/13 14:07:28 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

class NotFoundException : public std::exception {
public:
	const char* what() const throw() {
		return "Element not found in container";
	}
};

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	
	if (it == container.end())
	{
		throw NotFoundException();
	}
	return it;
}

#endif 
