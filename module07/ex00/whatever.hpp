/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:52:20 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/13 09:12:27 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WATHEVER_HPP

#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> 
T min (T a, T b)
{
	if (a > b)
		return b;
	return a;
}

template<typename T> 
T max (T a, T b)
{
	if (a > b)
		return a;
	return b;
}
#endif