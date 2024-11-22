/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:36:40 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 21:59:54 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& f);
		Animal& operator=(const Animal& f);
		std::string getType() const;
		virtual ~Animal();
		virtual void makeSound() const;
};