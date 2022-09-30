/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:32:35 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/30 15:27:22 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private :
			std::string _name;
			Weapon &_weapon;
	
	public :
			HumanA(Weapon _weapon);
			~HumanA();
			void attack_message() const;
			std::string getName() const;


};

#endif