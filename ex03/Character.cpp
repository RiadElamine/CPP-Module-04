/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:00:07 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 22:17:26 by relamine         ###   ########.fr       */
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
	*this = c;
}
Character& Character::operator=(const Character& c)
{
	clean_up();
	this->Name = c.getName();
	for (int i = 0; i < 4; i++)
	{
        if (c.slots[i])
        {
            this->slots[i] = c.slots[i]->clone();
        }
        else
        {
            this->slots[i] = NULL; 
        }
	}
}

std::string const & Character::getName() const
{
	return (this->Name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			break;
		}
	}
}
// must be stor slots[idx] before remove
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ((void)0);
	if (slots[idx] == NULL)
		return ((void)0);
	slots[idx] = NULL;
}
void Character::use(int idx, Character& target)
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
