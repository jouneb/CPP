/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:27:52 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/21 16:38:14 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
	private :
			std::string _name;
			int			_HitPoints;
			int			_EnergyPoints;
			int			_AttackDamage;
			ClapTrap();
	public :
			;
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &copy);
			ClapTrap& operator=(ClapTrap const &ClapTrap);
			~ClapTrap();

			//Accesseurs
			std::string	getName()const;
			int			getHitPoints()const;
			int			getEnergyPoints()const;
			int			getAttackDamage()const;
	
			void		setHitPoints(int const nb);
			void		setEnergyPoints(int const nb);
			void		setAttackDamage(int const nb);

			//Fonctions
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);



};

#endif