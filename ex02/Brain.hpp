/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:49:24 by relamine          #+#    #+#             */
/*   Updated: 2024/11/22 22:52:03 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& f);
		Brain& operator=(const Brain& f);
		~Brain();
};
