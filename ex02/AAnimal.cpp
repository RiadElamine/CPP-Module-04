/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:41:58 by relamine          #+#    #+#             */
/*   Updated: 2025/01/24 22:09:29 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "Default constructor of AAnimal called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of AAnimal called" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
