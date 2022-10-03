/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:47 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/03 16:14:20 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) 
{
	std::cout << "HumanB: " << this->_name << " created!" << std::endl;
	return ;
}

HumanB::~HumanB() 
{
	return ;
}

void	HumanB::attack() const
{
	if (this->_weapon == NULL)
	{
		std::cout << "I don't have any weapon !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

std::string	HumanB::getName() const
{
	return (this->_name);
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon) 
{ // je demande a recevoir la reference de l'objet Weapon (et non une copie)
	this->_weapon = &weapon; // this->_type est un ptr sur l'objet Weapon donc je le re-reference
}