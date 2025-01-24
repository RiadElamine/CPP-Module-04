/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:13:53 by relamine          #+#    #+#             */
/*   Updated: 2025/01/24 21:44:54 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor of Dog called" << std::endl;
	this->type = "Dog";
	this->b = new Brain();
	if (this->b == NULL)
		exit(1);
}

Dog::Dog(const Dog& f)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	if (this != &f)
	{
		this->type = f.type;
		this->b = new Brain(*f.b);
		if (this->b == NULL)
			exit(1);
	}
}

Dog& Dog::operator=(const Dog& f)
{
	std::cout << "Copy assignment operator of Dog called" << std::endl;
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

Dog::~Dog()
{
	delete b;
	std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
