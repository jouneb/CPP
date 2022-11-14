/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:42:07 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 17:23:28 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class	Intern
{
	private :
			Form *_form;
	public:
			Intern();
			Intern(Intern const &copy);
			Intern& operator=(Intern const &rhs);
			~Intern();

			Form* makeForm(std::string const &name, std::string const &target);

			Form*	robotomy(std::string const &target);	
			Form*	shrubbery(std::string const &target);	
			Form*	presidential(std::string const &target);	
};

#endif