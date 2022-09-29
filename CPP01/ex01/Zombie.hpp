/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:17:25 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 16:44:43 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

class Zombie
{
	private :
			std::string	_name;

	public :
			Zombie();
			~Zombie();
			void	announce(void);
			void	set_name(std::string name);
};

Zombie *zombieHorde( int N, std::string name );