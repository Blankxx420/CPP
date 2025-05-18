/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:24:48 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/18 23:25:31 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// On utilise le conteneur sous-jacent de std::stack, quel qu'il soit
	typedef typename std::stack<T>::container_type::iterator                iterator;
	typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

	// Constructeurs et destructeur standard
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack& src) : std::stack<T>(src) {}
	virtual ~MutantStack() {}

	// Opérateur d'affectation
	MutantStack& operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	// Méthodes pour les itérateurs
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	
	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }
	
	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }
	
	const_reverse_iterator rbegin() const { return this->c.rbegin(); }
	const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif