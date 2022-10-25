/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:14:04 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/25 17:51:31 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap 		Bob = ScavTrap("Bob");
	ScavTrap		Bernard = ScavTrap("Bernard");
	FragTrap		John = FragTrap("John");

	Bob.attack("Bernard");
	Bernard.takeDamage(2);
	Bernard.attack("Bob");
	John.takeDamage(2);
	John.highFivesGuys();
	Bernard.guardGate();
	Bernard.takeDamage(20);
	Bob.beRepaired(2);
	Bernard.beRepaired(5);
}