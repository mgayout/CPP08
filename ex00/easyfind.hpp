/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:15:01 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 10:15:01 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NotFoundException : public std::exception
{
	public:
			virtual const char*	what() const throw()
			{
				return ("Value not found.");
			}
};

template <typename T>
void	easyfind(T& container, int value)
{
	typename	T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw (NotFoundException());
	std::cout << "Value has been found." << std::endl;
}

template <typename T>
void	searchValue(T& container, int value)
{
	try
	{
		easyfind(container, value);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

#endif