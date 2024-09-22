/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:14:43 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/13 10:14:43 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <cstdlib>
#include <ctime>

#define VALUE 5

int main(void)
{
	std::srand(std::time(0));
	std::vector<int> v;

	for (int i = 0; i != VALUE; i++)
		v.push_back(i);
	searchValue(v, std::rand() % 10);
	return 0;
}
