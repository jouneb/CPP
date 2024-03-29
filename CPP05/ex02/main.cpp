/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:51 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:19:59 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Kevin = Bureaucrat("Kevin", 2);
		ShrubberyCreationForm	test = ShrubberyCreationForm("Jardin");
		RobotomyRequestForm		Robotommy = RobotomyRequestForm("Bernard");
		PresidentialPardonForm	Peace = PresidentialPardonForm("Michel");
		Kevin.signForm(test);
		Kevin.executeForm(test);
		Kevin.signForm(Robotommy);
		Kevin.executeForm(Robotommy);
		Kevin.signForm(Peace);
		Kevin.executeForm(Peace);
		// // Formtest.beSigned(Kevin);
		std::cout<<Kevin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}

}