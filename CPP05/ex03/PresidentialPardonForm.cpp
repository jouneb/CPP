/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:13:56 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:17:59 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <string>

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5), _target("")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
	:Form("PresidentialPardonForm", 25, 5), _target("")
{
	*this = copy;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		this->_target=rhs.getTarget();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

const std::string&	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::_execute() const
{
	std::cout<<" Informe que : " << this->getTarget() << " a ete pardonne par Zaphod Beeblebrox."<<std::endl;
}