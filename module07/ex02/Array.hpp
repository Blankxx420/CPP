/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:53:56 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/13 10:47:09 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int value);
		Array(Array<T> const & copied);
		Array<T>& operator=(Array<T> const &copied);
		~Array();
		
		T& operator[](unsigned int index);
    	const T& operator[](unsigned int index) const;
		unsigned int	size() const;
};

#include "Array.tpp"

#endif