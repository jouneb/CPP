/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:27:23 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/21 16:37:17 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
// Forme Cannonique

ClapTrap::ClapTrap()
{
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	return;
}

ClapTrap::~ClapTrap()
{
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	// std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_HitPoints = rhs.getHitPoints();
		this->_EnergyPoints = rhs.getEnergyPoints();
		this->_AttackDamage = rhs.getAttackDamage();
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name):_name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	return;
}

//Accesseurs
std::string	ClapTrap::getName()const
{
	return(this->_name);
}
int			ClapTrap::getHitPoints()const
{
	return(this->_HitPoints);
}
int			ClapTrap::getEnergyPoints()const
{
	return(this->_EnergyPoints);
}
int			ClapTrap::getAttackDamage()const
{
	return(this->_AttackDamage);
}
void		ClapTrap::setHitPoints(int const nb)
{
	this->_HitPoints = nb;
}
void		ClapTrap::setEnergyPoints(int const nb)
{
	this->_EnergyPoints = nb;
}
void		ClapTrap::setAttackDamage(int const nb)
{
	this->_AttackDamage = nb;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << "  points of damage !"<< std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "Not enough life points or energy points..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_HitPoints = this->_HitPoints - amount;
		std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit points" << std::endl;
	}
	else
		std::cout << this->_name << " : Sorry not enough life points or energy points..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_HitPoints = _HitPoints + amount;
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " Hit points !" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << this->_name << ": Sorry not enough life points or energy points..." <<std::endl;
}
