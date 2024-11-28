/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:02:10 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 18:33:25 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target){ (void)target;}

AMateria::~AMateria(){}
