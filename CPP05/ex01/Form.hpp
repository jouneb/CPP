/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:47:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/09 17:11:03 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			std::string		_name;
			bool			_isSigned;
			int				_toSign;
			int				_toExecute;
			Form();

	public :
			Form(std::string name, int tosign, int toexecute);
			Form(Form const &copy);
			Form& operator=(Form const &rhs);
			~Form();

			std::string	getName() const;
			bool		getbool() const;
			int			getTosign() const;
			int			getToexecute() const;

			void	beSigned(Bureaucrat const &Bureaucrat);
			
			class	GradeTooHighException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Grade deja trop haut...");
						}
			};
			
			class	GradeTooLowException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Grade trop bas...");
						}
			};
};

std::ostream& operator<<(std::ostream o, Form const &Form);

#endif