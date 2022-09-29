/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:26:54 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 16:44:03 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() : _name("")
{
	std::cout << "Zombie " << this->_name << " created" << std::endl;
	return;
}

Zombie::~Zombie()
{

	std::cout << this->_name << " a ete detruit."<< std::endl;
	return;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return;
}

void	Zombie::announce(void)
{
	std::cout <<this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}