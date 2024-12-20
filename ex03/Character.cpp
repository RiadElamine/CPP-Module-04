/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:00:07 by relamine          #+#    #+#             */
/*   Updated: 2024/12/08 04:45:50 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string Name)
{
	this->Name = Name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}


Character::~Character()
{
	clean_up();
}
Character::Character(Character &c)
{
	this->Name = c.getName();
	for (int i = 0; i < 4; i++)
	{
        if (c.getMateria(i))
        {
            this->slots[i] = c.getMateria(i)->clone();
        }
        else
        {
            this->slots[i] = NULL; 
        }
	}
}
Character& Character::operator=(const Character& c)
{
	clean_up();
	this->Name = c.getName();
	for (int i = 0; i < 4; i++)
	{
        if (c.getMateria(i))
        {
            this->slots[i] = c.getMateria(i)->clone();
        }
        else
        {
            this->slots[i] = NULL; 
        }
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->Name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ((void)0);
	if (slots[idx] == NULL)
		return ((void)0);
	slots[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ((void)0);
	if (slots[idx] == NULL)
		return ((void)0);
	slots[idx]->use(target);
}

void Character::clean_up()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
		{
			delete (this->slots[i]);
			this->slots[i] = NULL;
		}
	}
}

AMateria *Character::getMateria(int index) const
{
	return (this->slots[index]);
}