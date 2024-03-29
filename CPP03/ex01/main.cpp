/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:14:04 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/25 17:00:57 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap 		Bob = ScavTrap("Bob");
	ScavTrap		Bernard = ScavTrap("Bernard");

	Bob.attack("Bernard");
	Bernard.takeDamage(2);
	Bernard.attack("Bob");
	Bernard.guardGate();
	Bernard.takeDamage(20);
	Bob.beRepaired(2);
	Bernard.beRepaired(5);
}