/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:28 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/03 17:27:57 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanB: " << this->_name << " created!" << std::endl;
	return;
}

HumanA::~HumanA()
{
	// std::cout << this->_name << " killed." << std::endl;
	return;
}

void		HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string	HumanA::getName() const
{
	return (this->_name);
}

void	HumanA::attack() const
{
	std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}