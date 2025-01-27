/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:25:37 by relamine          #+#    #+#             */
/*   Updated: 2025/01/27 13:32:07 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// must not segfaul
	tmp = src->createMateria("air");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	//  must not segfaul
	me->use(2, *bob);


	//  must not segfaul
	//deep copy assignment operator
	Character reda("reda");
	{
		//  must not segfaul
		//deep copy constructor Charater
		Character riad("riad");
		
		Character newRiad(riad);
		std::cout << "- " << newRiad.getName() << std::endl;
		
		reda = newRiad;	
	}
	std::cout << "copy assignment operator " << reda.getName() << std::endl;
	reda.use(0, *bob);


	// must not segfaul
	// unequip
		me->unequip(9987);
		me->unequip(0);
		me->use(0, *bob);
		me->unequip(1);
	

	delete bob;
	delete me;
	delete src;
	
	return 0;
}