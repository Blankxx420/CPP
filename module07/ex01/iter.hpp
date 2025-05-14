/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:20:35 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/13 09:28:36 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename Func>

void iter(T *array, int length, Func func)
{
	int i;
	for (i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif