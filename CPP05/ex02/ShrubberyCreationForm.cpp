/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:12:31 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/10 17:10:26 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) 
		: Form("ShrubberyCreationForm", 145, 137), _target("")
{
	*this = copy;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		this->_target=rhs.getTarget();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

const std::string&	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::_execute() const
{
	std::string		filename;

	filename = this->_target + "_shrubbery";
	std::ofstream	ofs(filename.c_str());
	if (!ofs)
	{
		std::cerr << "File " << filename << "couldn't be open" << std::endl;
		return;
	}
	ofs << "   oo    /\
			  oooo   / \
				l	  |"
}	
