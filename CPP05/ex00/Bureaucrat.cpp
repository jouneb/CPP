/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:06 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/15 11:14:45 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
	std::cout<<"Bienvenue "<< this->_name << ", vous etes grade :"<< this->_grade<<std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}


std::string const&	 Bureaucrat::getName() const
{
	return(this->_name);
}

int		Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void	Bureaucrat::upGrade()
{
	if (this->_grade <= 1)
	{
		throw GradeTooHighException();
	}
		this->_grade = this->_grade - 1;
		std::cout<<"Bravo, pour cette promotion " <<this->_name<<std::endl;
}

void	Bureaucrat::downGrade()
{
	if (this->_grade >= 150)
	{
		throw GradeTooLowException();
	}
	if(this->_grade < 150 && this->_grade > 1)
		this->_grade = this->_grade + 1;
	std::cout<<"C'est un avertissement, j'espere que cela ne se reproduira plus "<<this->_name<<std::endl;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return(os);
}