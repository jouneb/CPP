/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:51 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/10 16:47:41 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Kevin = Bureaucrat("Kevin", 10);
		ShrubberyCreationForm test = ShrubberyCreationForm("lol");
		// Kevin.upGrade();
		// // Formtest.beSigned(Kevin);
		// Kevin.signForm(Formtest);
		std::cout<<Kevin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}

}