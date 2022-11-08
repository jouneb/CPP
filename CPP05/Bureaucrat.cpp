/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:06 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 17:16:38 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	//a voir si c'est possible d'en faire un sans nom je pense pas:
}

Bureaucrat::Bureaucrat(Bureaucrat& const copy)
{
	*this = copy;
	return(*this);
}

Bureaucrat& operator=(Bureaucrat& const rhs)
{
	if (*this != rhs)
	{
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}


std::string& const Bureaucrat::getName() const
{
	return(this->_name);
}

int		Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void	Bureaucrat::upGrade()
{
	if (this->_grade > 1)
		this->_grade = _grade--;
}

void	Bureaucrat::downGrade()
{
	if(this->_grade < 150 && this->_grade > 1)
		this->_grade = _grade++;
}