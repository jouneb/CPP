/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:35 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/03 15:51:49 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private :
			std::string _name;
			Weapon 		&_weapon;
	
	public :
			HumanA(std::string name, Weapon &weapon);
			~HumanA();

			void attack() const;
			std::string getName() const;
			void		setName(std::string name);
		


};

#endif