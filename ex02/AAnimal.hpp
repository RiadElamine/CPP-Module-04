/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:42:11 by relamine          #+#    #+#             */
/*   Updated: 2025/01/24 22:09:15 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "iostream"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		std::string getType() const;
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
};