/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:21:45 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/18 23:36:31 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0), _data(NULL)
{
	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int value): _size(value), _data(NULL)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span& copied)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = copied;
}

Span& Span::operator=(const Span& copied)
{
	std::cout << "Span Assignation operator called" << std::endl;
	if (this != &copied)
	{
		this->_data = copied._data;
		this->_size = copied._size;	
	}
	return *this;
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

void Span::addNumber(unsigned int value)
{
	if (this->_data.size() < this->_size)
		this->_data.push_back(value);
	else
		throw (Span::SizeLimitException());
}

unsigned int Span::shortestSpan(void)
{
	unsigned int shortest = std::numeric_limits<unsigned int>::max();
	unsigned int tmp;
	
	if (_data.size() <= 1)
		throw (Span::EmptyDataException());

	std::vector<unsigned int> sorted = _data;
	std::sort(sorted.begin(), sorted.end());
	
	for (unsigned int i = i; i < _size; i++)
	{
		tmp = sorted[i] - sorted[i - 1];
		if (shortest >= tmp)
			shortest = tmp;
	}
	return (shortest);
}

unsigned int Span::longestSpan(void)
{
	if (_data.size() <= 1)
		throw (Span::EmptyDataException());
	std::vector<unsigned int>::iterator min = std::min_element(_data.begin(), _data.end());
	std::vector<unsigned int>::iterator max = std::max_element(_data.begin(), _data.end());
	return (*max - *min);
}

const char * Span::SizeLimitException::what(void) const
{
	return ("Size limit reach");
}

const char * Span::EmptyDataException::what(void) const
{
	return ("Empty data");
}

template <typename Iterator>
void	Span::addRange(Iterator begin, Iterator end)
{
	unsigned int count = 0;
	Iterator it = begin;
	
	while (it != end)
	{
		count++;
		++it;
	}
	if (_data.size() + count > _size)
		throw Span::SizeLimitException();
	_data.insert(_data.end(), begin, end);
}