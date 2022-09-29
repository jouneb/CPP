/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:34 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 16:53:02 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombiesLol;
	Zombie *zombiesmdr;
	Zombie *zombiesDE_OUF;
	int		i;

	zombiesLol = zombieHorde(3, "LOl");
	for (i = 0; i < 3; i++)
		zombiesLol[i].announce();
	delete[] zombiesLol;
	std::cout << std::endl;
	
	zombiesDE_OUF = zombieHorde(5, "DE_OUF");
	for (i = 0; i < 5; i++)
		zombiesDE_OUF[i].announce();
	delete[] zombiesDE_OUF;
	std::cout << std::endl;
	
	zombiesmdr = zombieHorde(2, "mdr");
	for (i = 0; i < 2; i++)
		zombiesmdr[i].announce();
	delete[] zombiesmdr;

}