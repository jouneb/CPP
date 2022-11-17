/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:03 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/15 15:16:13 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private :
			std::string const	_name;
			int					_grade;
			Bureaucrat();
	public:
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat const &copy);
			Bureaucrat& operator=(Bureaucrat const &rhs);
			~Bureaucrat();

			std::string const&	getName() const;
			int					getGrade() const;

			void	upGrade();
			void	downGrade();
			
			class	GradeTooHighException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Grade trop haut.");
						}
			};
			
			class	GradeTooLowException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Grade trop bas.");
						}
			};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &rhs);

#endif