/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:57:05 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 18:38:39 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice& c);
		Ice& operator=(const Ice& c);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice();
};
