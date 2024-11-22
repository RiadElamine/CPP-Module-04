/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:13:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 20:15:20 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& f)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = f;
}

Cat& Cat::operator=(const Cat& f)
{
	std::cout << "Copy assignment operator of Cat called" << std::endl;
	this->type = f.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Moew" << std::endl;
}
