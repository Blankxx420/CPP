/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:22:03 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/14 10:39:59 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>


class Span
{
    private:
        std::vector<unsigned int> _data;
        unsigned int _size;
        Span();
    public:
        Span(unsigned int value);
        Span(Span const & copied);
        Span & operator=(Span const & copied);
        ~Span();

        void addNumber(unsigned int value);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
};

#endif