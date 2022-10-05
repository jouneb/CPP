/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:34 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/05 18:16:45 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::	Harl()
{
	return;
}

Harl:: ~Harl()
{
	return;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon,I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_debug)(void) = &Harl::debug;
	void	(Harl::*ptr_info)(void) = &Harl::info;
	void	(Harl::*ptr_warning)(void) = &Harl::warning;
	void	(Harl::*ptr_error)(void) = &Harl::error;
	std::string		complains[4] = {"debug", "info", "warning", "error"};
	int	i = 0;

	while(i < 4)
	{
		if (complains[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*ptr_debug)();
			break;
		case 1:
			(this->*ptr_info)();
			break;
		case 2:
			(this->*ptr_warning)();
			break;
		case 3:
			(this ->*ptr_error)();
			break;
		default:
			std::cout << "INVALID ARG";
			break;
	}
}