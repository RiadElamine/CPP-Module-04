/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:56:57 by relamine          #+#    #+#             */
/*   Updated: 2025/01/28 14:30:13 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& c)
{
	*this = c;
}
Cure& Cure::operator=(const Cure& c)
{
	(void)c;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria* New_Cure = new (std::nothrow) Cure;
	if (!New_Cure)
		exit(1);
	return (New_Cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}

Cure::~Cure()
{
	
}