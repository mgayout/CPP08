/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:49:31 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 10:49:31 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <set>
# include <vector>
# include <numeric>

class	Span
{
	public:
			Span(unsigned int n);
			Span(const Span& other);
			Span& operator=(const Span& other);
			~Span();

			void	addNumber(int n);
			void	addNumbers(std::vector<int>::iterator a, std::vector<int>::iterator b);

			int		shortestSpan();
			int		longestSpan();

			class	FullSpanException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

			class	EmptySpanException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

	private:
			std::set<int>	span_;
			unsigned int	size_;
};

#endif