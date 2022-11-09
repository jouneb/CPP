/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:51 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/09 15:03:36 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Kevin = Bureaucrat("Kevin", 10);
		Kevin.upGrade();
		std::cout<<Kevin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}
	try
	{
		Bureaucrat Bernard = Bureaucrat("Bernard", 150);
		Bernard.downGrade();
		std::cout<<Bernard;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}
	try
	{
		Bureaucrat Simone = Bureaucrat("Simone", 1);
		Simone.upGrade();
		std::cout<<Simone;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}
	try
	{
		Bureaucrat Mary = Bureaucrat("Mary", 0);
		Mary.downGrade();
		std::cout<<Mary;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}
	try
	{
		Bureaucrat Lea = Bureaucrat("Lea", 215);
		Lea.downGrade();
		std::cout<<Lea;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what() << std::endl;
	}

}