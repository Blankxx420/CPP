/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:29:06 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/21 10:12:42 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <iostream>

class A;
class C;
class B;

class Base
{
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif