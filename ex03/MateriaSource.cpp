/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:49:38 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 20:05:49 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] == NULL)
		{
			this->Materias[i] = m;
			break;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i]->getType() == type)
		{
			return (this->Materias[i]->clone());
		}
	}
	return (0);
}
