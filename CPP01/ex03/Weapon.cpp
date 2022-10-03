/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:33:00 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/03 17:26:44 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

	Weapon::Weapon(std::string type) : _type(type)
	{
		std::cout << "Weapon created" << std::endl;
		return;
	}

	Weapon:: ~Weapon()
	{
		return;
	}

	const std::string&	Weapon::getType() const
	{
		const std::string 	&typeREF = this->_type;
		return(typeREF);
	}

	void Weapon::setType(std::string type)
	{
		this->_type = type;
	}