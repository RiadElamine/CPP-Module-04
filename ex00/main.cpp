/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:36:19 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 22:47:53 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound(); 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	std::cout << "--------------------------" << std::endl;
	const WrongAnimal *Wmeta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << Wmeta->getType() << " " << std::endl;

	k->makeSound();
	Wmeta->makeSound();

	delete Wmeta;
	delete k;
return 0;
}