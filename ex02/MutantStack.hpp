/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:07:03 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 16:07:03 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
			MutantStack<T>();
			MutantStack<T>(const MutantStack<T>& other);
			MutantStack<T>&	operator=(const MutantStack<T>& other);
			~MutantStack<T>();

			typedef typename std::stack<T>::container_type::iterator		iterator;
			typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

			iterator	begin();
			iterator	end();

			const_iterator	cbegin();
			const_iterator	cend();
};

# include "MutantStack.tpp"

#endif