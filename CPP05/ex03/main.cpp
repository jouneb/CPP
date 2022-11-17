/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:51 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/17 11:39:39 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat Kevin = Bureaucrat("Kevin", 2);
		// ShrubberyCreationForm	test = ShrubberyCreationForm("Jardin");
		// RobotomyRequestForm		Robotommy = RobotomyRequestForm("Bernard");
		// PresidentialPardonForm	Peace = PresidentialPardonForm("Michel");
		Intern randomIntern;
		Form* test;
		test = randomIntern.makeForm("robotomy request","lol");
		test = randomIntern.makeForm("presidential pardon","lol");
		test = randomIntern.makeForm("shruberry creation","lol");
		test = randomIntern.makeForm("shrubbe","lol");
		(void) test;
		// Kevin.signForm(test);
		// Kevin.executeForm(test);
		// Kevin.signForm(Robotommy);
		// Kevin.executeForm(Robotommy);
		// Kevin.signForm(Peace);
		// Kevin.executeForm(Peace);
		// // Formtest.beSigned(Kevin);
		std::cout<<Kevin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}

}