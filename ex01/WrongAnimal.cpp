/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:02:23 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 22:12:18 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Default constructor of WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& f)
{
	std::cout << "Copy constructor of WrongAnimal called" << std::endl;
	*this = f;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& f)
{
	std::cout << "Copy assignment operator of WrongAnimal called" << std::endl;
	this->type = f.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make Sound" << std::endl;
}