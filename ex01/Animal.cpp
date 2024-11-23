/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:36:16 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 21:58:33 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default constructor of Animal called" << std::endl;
}

Animal::Animal(const Animal& f)
{
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = f;
}

Animal& Animal::operator=(const Animal& f)
{
	std::cout << "Copy assignment operator of Animal called" << std::endl;
	this->type = f.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal make Sound" << std::endl;
}