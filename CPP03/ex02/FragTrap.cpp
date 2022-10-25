/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:15:50 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/25 17:49:51 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string	name)
{
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap( void ) 
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=( FragTrap const &copy ) 
{

	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_HitPoints = copy.getHitPoints();
		this->_EnergyPoints = copy.getEnergyPoints();
		this->_AttackDamage = copy.getAttackDamage();
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << " High Fives ?" << std::endl;
	return;
}