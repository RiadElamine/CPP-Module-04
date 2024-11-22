/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:07:56 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 22:11:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor of WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& f)
{
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = f;
}

WrongCat& WrongCat::operator=(const WrongCat& f)
{
	std::cout << "Copy assignment operator of WrongCat called" << std::endl;
	this->type = f.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Moew" << std::endl;
}
