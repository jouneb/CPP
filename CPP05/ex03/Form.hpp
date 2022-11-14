/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:47:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 13:29:23 by jbouyer          ###   ########.fr       */
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
	protected:
			Form();
			virtual void	_execute() const = 0;

	public :
			Form(std::string name, int tosign, int toexecute);
			Form(Form const &copy);
			Form& operator=(Form const &rhs);
			virtual ~Form();

			std::string	getName() const;
			bool		getbool() const;
			int			getTosign() const;
			int			getToexecute() const;

			void	beSigned(Bureaucrat const &Bureaucrat);
			virtual void	execute(Bureaucrat const &executor) const;
			
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
			class	NotSignedException : public std::exception
			{
				public : 
						virtual const char* what() const throw()
						{
							return("Pas signe.");
						}
			};
};

std::ostream& operator<<(std::ostream o, Form const &Form);

#endif