/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:14:37 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/15 13:55:51 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

	Form::Form(std::string name, int tosign, int toexecute):
		_name(name), _isSigned(false), _toSign(tosign), _toExecute(toexecute)
	{
		if (this->_toSign > 150 || this->_toExecute > 150)
			throw GradeTooLowException();
		
		if (this->_toSign < 1 || this->_toExecute < 1)
			throw GradeTooHighException();
		std::cout<<"form created !"<<std::endl;
		return;
	}

	Form::Form(Form const &copy) : _name(copy.getName()), _toSign(copy.getTosign()), _toExecute(copy.getToexecute())
	{
		*this = copy;
		return;
	}

	Form&	Form::operator=(Form const &rhs)
	{
		if (this != &rhs)
		{		
			this->_isSigned = rhs._isSigned;
		}
		return *this;
	}
	Form::~Form()
	{
		return;
	}

	std::string		Form::getName() const
	{
		return (this->_name);
	}
	bool		Form::getbool() const
	{
		return (this->_isSigned);
	}
	int		Form::getTosign() const
	{
		return (this->_toSign);
	}
	int		Form::getToexecute() const
	{
		return (this->_toExecute);
	}

	void	Form::beSigned(Bureaucrat const &Bureaucrat)
	{
		if (Bureaucrat.getGrade() > this->_toSign)
			throw GradeTooLowException();
		else
			this->_isSigned = true;
	}

	std::ostream& operator<<(std::ostream& o, Form const &Form)
	{
		o << "Formulaire : "<<Form.getName()<<". Deja signe ? "<<Form.getbool()<<". Combien pour signer ?" << Form.getTosign() << ". Combien pour executer ?"<<Form.getToexecute()<<std::endl;
		return(o);
	}
