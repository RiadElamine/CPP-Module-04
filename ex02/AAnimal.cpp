/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:41:58 by relamine          #+#    #+#             */
/*   Updated: 2024/11/23 23:43:51 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "Default constructor of AAnimal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& f)
{
	std::cout << "Copy constructor of AAnimal called" << std::endl;
	*this = f;
}

AAnimal& AAnimal::operator=(const AAnimal& f)
{
	std::cout << "Copy assignment operator of AAnimal called" << std::endl;
	this->type = f.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of AAnimal called" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
