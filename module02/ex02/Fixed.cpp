/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 01:35:50 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/18 22:42:04 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor & destructor
Fixed::Fixed(): _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = num << this->_fractional_bit;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(num * (1 << _fractional_bit));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// getter
int     Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_number;
}

// setter
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

// conversion function
int     Fixed::toInt(void) const 
{
	return (this->_number >> _fractional_bit);
}

float   Fixed::toFloat(void) const 
{
	return ((float)this->_number / (float) (1 << _fractional_bit));
}

// Surchaged operator functions
Fixed&  Fixed::operator = (const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_number = fixed.getRawBits();
	return *this;
}

// comparison  operators functions
bool	Fixed::operator > (Fixed const &src) const
{
	bool superior = false;
	if (this->_number > src.getRawBits())
		superior = true;
	return (superior);
}

bool	Fixed::operator < (Fixed const &src) const
{
	bool inferior = false;
	if (this->_number < src.getRawBits())
		inferior = true;
	return (inferior);
}

bool	Fixed::operator >= (Fixed const &src) const
{
	bool superior = false;
	if (this->_number >= src.getRawBits())
		superior = true;
	return (superior);
}

bool	Fixed::operator <= (Fixed const &src) const
{
	bool inferior = false;
	if (this->_number <= src.getRawBits())
		inferior = true;
	return (inferior);
}

bool	Fixed::operator == (Fixed const &src) const
{
	bool inferior = false;
	if (this->_number == src.getRawBits())
		inferior = true;
	return (inferior);
}

bool	Fixed::operator != (Fixed const &src) const
{
	bool inferior = false;
	if (this->_number != src.getRawBits())
		inferior = true;
	return (inferior);
}

// arithmetic operators functions
Fixed	Fixed::operator +(Fixed const &src) const
{
	Fixed result;
	
	result.setRawBits(this->_number + src.getRawBits());
	return (result);
}

Fixed	Fixed::operator - (Fixed const &src) const
{
	Fixed result;
	
	result.setRawBits(this->_number - src.getRawBits());
	return (result);
}

Fixed	Fixed::operator * (Fixed const &src) const
{
	Fixed result;
	
	result.setRawBits((this->_number * src.getRawBits()) >> this->_fractional_bit);
	return (result);
}

Fixed	Fixed::operator / (Fixed const &src) const
{
	Fixed result;
	
	result.setRawBits((this->_number << this->_fractional_bit) / src.getRawBits());
	return (result);
}

// increment / decrement operators functions
Fixed&	Fixed::operator ++()
{
	_number++;
	return (*this);
}

Fixed	Fixed::operator ++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed&	Fixed::operator --()
{
	_number--;
	return (*this);
}

Fixed	Fixed::operator --(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

Fixed Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

const Fixed Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

const Fixed Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

std::ostream& operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
