/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:49:16 by relamine          #+#    #+#             */
/*   Updated: 2024/11/23 22:47:14 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Uh-oh, danger";
}

Brain::Brain(const Brain& f)
{
	std::cout << "Copy constructor of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = f.ideas[i];
}

Brain& Brain::operator=(const Brain& f)
{
	std::cout << "Copy assignment operator of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = f.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}
