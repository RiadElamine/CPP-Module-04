/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:49:38 by relamine          #+#    #+#             */
/*   Updated: 2024/12/08 04:26:00 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource()
{
	clean_up();
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
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
		if (this->Materias[i] && this->Materias[i]->getType() == type)
		{
			return (this->Materias[i]->clone());
		}
	}
	return (0);
}

void MateriaSource::clean_up()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i])
		{
			delete (this->Materias[i]);
			this->Materias[i] = NULL;
		}
	}
}