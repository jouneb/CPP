/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:58:16 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 15:08:05 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " a ete detruit."<< std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout <<this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}