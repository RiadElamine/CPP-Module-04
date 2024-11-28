/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:02:12 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 18:32:30 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

// note : check if you need copy assignment operator and copy constructor
class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const; 
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria();
};
