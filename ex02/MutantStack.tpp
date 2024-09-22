/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:08:04 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 16:08:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
{
	*this = other;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& other)
{
	*this = other;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin()
{
	return (this->c.cbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend()
{
	return (this->c.cend());
}
