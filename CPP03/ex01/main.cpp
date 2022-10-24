/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:14:04 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/21 16:34:17 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap 		Bob = ClapTrap("Bob");
	ClapTrap		Bernard = ClapTrap("Bernard");

	Bob.attack("Bernard");
	Bernard.takeDamage(2);
	Bernard.attack("Bob");
	Bernard.takeDamage(20);
	Bob.beRepaired(2);
	Bernard.beRepaired(5);
}