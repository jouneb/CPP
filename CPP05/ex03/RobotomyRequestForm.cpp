/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:08:58 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 14:54:10 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <string>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45), _target("")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
	:Form("RobotomyRequestForm", 72, 45), _target("")
{
	*this = copy;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->_target=rhs.getTarget();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

const std::string&	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::_execute() const
{
	std::cout<<" Des bruits de perceuse." <<std::endl;
	srand((unsigned int)time(0));
	int valeur = rand();
	if (valeur % 2 == 0)
		std::cout<<this->getTarget()<<" a ete robotommise avec succes."<<std::endl;
	else
		std::cout<<this->_target << " n'a pas pu etre robotomise..."<<std::endl;
}