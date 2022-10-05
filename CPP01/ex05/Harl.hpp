/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:46:55 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/05 16:59:14 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
# include <string>

class	Harl
{
	private :
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);

	public :
			Harl();
			~Harl();
			void	complain(std::string level);
};

#endif