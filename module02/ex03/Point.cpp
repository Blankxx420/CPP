/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:06:44 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/20 22:06:46 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{

}

Point::Point(const float x, const float y): _x(x), _y(y)
{

}

Point::Point(const Point &src): _x(src._x), _y(src._y)
{

}

Point::~Point(void)
{

}

Point	&Point::operator =(const Point &src)
{
	(void)src;
	return *this;
}

Fixed	Point::x(void) const
{
	return this->_x;
}

Fixed	Point::y(void) const
{
	return this->_y;
}

std::ostream	&operator <<(std::ostream &o, const Point &p)
{
	o << "(" << p.x().toFloat() << ", " << p.y().toFloat() << ")";
	return o;
}
