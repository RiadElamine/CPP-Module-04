/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:57:03 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 18:38:19 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice& c)
{
	*this = c;
}
Ice& Ice::operator=(const Ice& c)
{
	(void)c;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria* New_Ice = new Ice;
	if (!New_Ice)
		exit(1);
	return (New_Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}

Ice::~Ice()
{
	
}
