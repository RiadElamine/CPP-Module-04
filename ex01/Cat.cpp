/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:13:59 by relamine          #+#    #+#             */
/*   Updated: 2025/01/25 17:33:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor of Cat called" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
	if (this->b == NULL)
		exit(1);
}

Cat::Cat(const Cat& f)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	if (this != &f)
	{
		this->type = f.type;
		this->b = new Brain(*f.b);
		if (this->b == NULL)
			exit(1);
	}
}

Cat& Cat::operator=(const Cat& f)
{
	std::cout << "Copy assignment operator of Cat called" << std::endl;
	if (this != &f)
	{
		this->type = f.type;
		delete b;
		this->b = new Brain(*f.b);
		if (this->b == NULL)
			exit(1);
	}
	return (*this);
}

Cat::~Cat()
{
	delete b;
	std::cout << "Destructor of Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Moew" << std::endl;
}
