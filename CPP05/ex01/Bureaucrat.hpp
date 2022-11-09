/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:03 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/09 17:23:13 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
			std::string _name;
			int			_grade;
			Bureaucrat();
	protected:
	public:
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat const &copy);
			Bureaucrat& operator=(Bureaucrat const &rhs);
			~Bureaucrat();

			std::string	getName() const;
			int	 getGrade() const;

			void	upGrade();
			void	downGrade();

			void	signForm(Form  &Form);
			
			class	GradeTooHighException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Pschiiit il ne fallait pas essayer d'aller plus haut que le maximum...");
						}
			};
			
			class	GradeTooLowException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Dommage plus bas que ca c'est la porte, vous etes vire.");
						}
			};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &rhs);

#endif