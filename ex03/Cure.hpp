/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:56:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/28 18:34:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure& c);
		Cure& operator=(const Cure& c);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Cure();
};
