/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:58:35 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 15:08:58 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie;

	Zombie = newZombie("Zo-leZOmbie");
	randomChump("Foo");
	delete Zombie;
	return (0);
}