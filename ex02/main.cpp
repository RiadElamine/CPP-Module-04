/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:36:19 by relamine          #+#    #+#             */
/*   Updated: 2025/01/25 19:10:17 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal *j[4] ;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "-----" <<  std::endl;
		if (i % 2 == 0)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}
	std::cout << "------------Destructor--------------" <<  std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete j[i];
		std::cout << "-----" <<  std::endl;
	}
	
	std::cout << "------------Test deep copies--------------" <<  std::endl;
	Cat a;
	{
		Cat b = a;
	}

	return (0);
}