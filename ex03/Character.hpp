/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:00:27 by relamine          #+#    #+#             */
/*   Updated: 2025/01/24 21:48:17 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string Name;
		AMateria *slots[4];
		AMateria *stor_slots[4];
	public:
		Character(std::string Name);
		Character(Character &c);
		Character& operator=(const Character& c);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void clean_up();
		AMateria *getMateria(int index) const;
};

