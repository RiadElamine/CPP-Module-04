/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:49:38 by relamine          #+#    #+#             */
/*   Updated: 2025/01/27 16:52:15 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->Materias[i] = NULL;
	}
}
MateriaSource::MateriaSource(MateriaSource &c)
{
	if (this == &c)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (c.getMateria(i))
			this->Materias[i] = c.getMateria(i)->clone();
		else
			this->Materias[i] = NULL;
	}
}
MateriaSource& MateriaSource::operator=(const MateriaSource& c)
{
	if (this == &c)
		return (*this);
	clean_up();
	for (int i = 0; i < 4; i++)
	{
		if (c.getMateria(i))
			this->Materias[i] = c.getMateria(i)->clone();
	}
	return (*this);
}
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
	return (NULL);
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
AMateria *MateriaSource::getMateria(int index) const
{
	return (this->Materias[index]);
}