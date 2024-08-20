/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 01:28:16 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/18 22:07:43 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_number;
		static const int _fractional_bit = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &fixed);
		~Fixed();
		
		Fixed&  operator = (const Fixed &fixed);
		
		bool	operator >(Fixed const &src) const;
		bool	operator <(Fixed const &src) const;
		bool	operator >=(Fixed const &src) const;
		bool	operator <=(Fixed const &src) const;
		bool	operator ==(Fixed const &src) const;
		bool	operator !=(Fixed const &src) const;

		Fixed	operator +(Fixed const &src) const;
		Fixed	operator -(Fixed const &src) const;
		Fixed	operator *(Fixed const &src) const;
		Fixed	operator /(Fixed const &src) const;

		Fixed&	operator ++(); // prefix
		Fixed	operator ++(int); // postfix
		Fixed&	operator --(); // prefix
		Fixed	operator --(int); // postfix
		
		int     getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		static Fixed min(Fixed &num1, Fixed &num2);
		static const Fixed min(const Fixed &num1, const Fixed &num2);
		static Fixed max(Fixed &num1, Fixed &num2);
		static const Fixed max(const Fixed &num1, const Fixed &num2);
		
};

std::ostream& operator << (std::ostream &os, const Fixed &fixed);
#endif