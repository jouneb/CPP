/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:51 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/17 11:00:59 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Kevin = Bureaucrat("Kevin", 10);
		Form	Formtest("Formtest", 2, 58);
		Kevin.upGrade();
		Formtest.beSigned(Kevin);
		Kevin.signForm(Formtest);
		std::cout<<Kevin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}
	try
	{
		Bureaucrat Lea = Bureaucrat("Lea", 10);
		Form	LeaForm("LeaForm", 25, 58);
		Lea.upGrade();
		LeaForm.beSigned(Lea);
		Lea.signForm(LeaForm);
		std::cout<<Lea;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}

}