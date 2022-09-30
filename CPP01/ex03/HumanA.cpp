/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:28 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/30 15:19:53 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::Attack_message()
{
	std::cout<<this->_name<<"attacks with their"<<this _weapon.type<<std::endl;
}