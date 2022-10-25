/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:11 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/25 17:33:54 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private : 

	public : 
			FragTrap();
			FragTrap(std::string name);
			~FragTrap();
			FragTrap(FragTrap const &copy);
			FragTrap&	operator=(FragTrap const &copy);
			void highFivesGuys(void);
};

#endif