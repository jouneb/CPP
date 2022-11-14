/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:11 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 17:26:07 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
	return;
}

Intern& Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
	delete this->_form;
	return;
}

Form*	Intern::robotomy(std::string const &target)	
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::shrubbery(std::string const &target)	
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::presidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	Form* form;
	std::string	Formtype[3] = {"presidential pardon", "robotomy request", "shruberry creation"};
	Form* (Intern::*fctPtr[3])(std::string const &target);
	// Form* (Intern::*fctPtr[0])(std::string const &target) = &Intern::presidential;
	// Form* (Intern::*fctPtr[1])(std::string const &target) = &Intern::robotomy;
	// Form* (Intern::*fctPtr[2])(std::string const &target) = &Intern::shrubbery;
	fctPtr[0] = &Intern::presidential;
	fctPtr[1] = &Intern::robotomy;
	fctPtr[2] = &Intern::shrubbery;

	int i = 0;
	while(i < 3)
	{
		if (Formtype[i] == name)
		{
			form = (this->*fctPtr[i])(target);
			std::cout << "Intern created " << name << std::endl;
			return (form);
		}
		i++;
	}
	std::cout << "le nom du  formulaire paasse en parametre n'existe pas" << std::endl;
	return (NULL);
}