/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:53 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/03 15:59:12 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private :
			std::string _name;
			Weapon 		*_weapon;
	
	public :
			HumanB(std::string name);
			~HumanB();

			void attack() const;

			std::string getName() const;
			void		setName(std::string name);
			void		setWeapon(Weapon &weapon);
};

#endif