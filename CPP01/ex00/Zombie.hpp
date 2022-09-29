/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:44:22 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 14:51:26 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie
{
	private :
			std::string	_name;

	public :
			Zombie(const std::string name);
			~Zombie();
			void announce(void);
};

	void randomChump(std::string name);
	Zombie* newZombie (std::string name);
	
#endif