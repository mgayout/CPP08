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

Span::Span(unsigned int n) : size_(n)
{

}

Span::Span(const Span& other) 
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	*this = other;
	return *this;
}

Span::~Span()
{

}

void	Span::addNumber(int n)
{
	if (span_.size() >= size_)
		throw (FullSpanException());
	span_.insert(n);
}

void	Span::addNumbers(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
	while (a++ != b)
	{
		if (span_.size() >= size_)
			throw (FullSpanException());
		addNumber(*a);
	}		
}

int		Span::shortestSpan()
{
	if (span_.size() < 2)
		throw (EmptySpanException());
	int	shortest = -1;
	
	std::set<int>::iterator n = span_.begin();
	for (std::set<int>::iterator n1 = ++span_.begin(); n1 != span_.end(); n1++)
	{
		if (*n1 - *n < shortest || shortest == -1)
			shortest = *n1 - *n;
		n = n1;
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if (span_.size() < 2)
		throw (EmptySpanException());
	return (*span_.rbegin() - *span_.begin());
}

const char* Span::FullSpanException::what(void) const throw()
{
	return ("Span is full.");
}

const char* Span::EmptySpanException::what(void) const throw()
{
	return ("Span is empty.");
}
