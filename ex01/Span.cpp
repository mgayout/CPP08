/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:49:04 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 10:49:04 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{

}

Span::Span(const Span& other) 
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	(void)other;
	return *this;
}

Span::~Span()
{

}

void	Span::addNumber(int n)
{
	if (_span.size() >= _size)
		throw (FullSpanException());
	_span.insert(n);
}

void	Span::addNumbers(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
	while (a++ != b)
	{
		if (_span.size() >= _size)
			throw (FullSpanException());
		else
			addNumber(*a);
	}		
}

int		Span::shortestSpan()
{
	if (_span.size() < 2)
		throw (EmptySpanException());
	int	shortest = -1;
	
	std::set<int>::iterator n = _span.begin();
	for (std::set<int>::iterator n1 = ++_span.begin(); n1 != _span.end(); n1++)
	{
		if (*n1 - *n < shortest || shortest == -1)
			shortest = *n1 - *n;
		n = n1;
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if (_span.size() < 2)
		throw (EmptySpanException());
	return (*_span.rbegin() - *_span.begin());
}

const char* Span::FullSpanException::what(void) const throw()
{
	return ("Span is full.");
}

const char* Span::EmptySpanException::what(void) const throw()
{
	return ("Span is empty or not enough filled.");
}
