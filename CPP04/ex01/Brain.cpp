/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:53 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 14:44:55 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain Constructor Called"<<std::endl;
	return;
}

Brain::Brain(Brain const &copy)
{
	std::cout<<"Brain Copy Constructor Called"<<std::endl;
	if (this != &copy)
		*this = copy;
	return;
}

Brain::~Brain()
{
	std::cout<<"Brain Destructor Called"<<std::endl;
	return;
}

Brain& Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

void	Brain::SetIdeas(std::string ideas, int const nb) 
{
	this->_ideas[nb] = ideas;
	return;
}

std::string		Brain::GetIdeas(int const nb) const
{
	return(this->_ideas[nb]);
}
