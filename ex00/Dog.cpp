/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:13:53 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 20:00:55 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& f)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = f;
}

Dog& Dog::operator=(const Dog& f)
{
	std::cout << "Copy assignment operator of Dog called" << std::endl;
	this->type = f.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
