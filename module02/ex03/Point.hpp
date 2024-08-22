/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:47:15 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/20 22:12:41 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
			const Fixed _x;
			const Fixed _y;
	public:
		Point();
		Point(const float value_x, const float value_y);
		Point(const Point &cpy);
		~Point();
		Point& operator = (const Point &point);
		Fixed	x(void) const;
		Fixed	y(void) const;
};

std::ostream& operator << (std::ostream &os, const Point &point);

#endif