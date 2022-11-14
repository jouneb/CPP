/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:49:38 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/10 17:07:25 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private :
			std::string		_target;
			ShrubberyCreationForm();
	public :
			ShrubberyCreationForm(const std::string &target);
			ShrubberyCreationForm(ShrubberyCreationForm const &copy);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);
			
			virtual ~ShrubberyCreationForm();

			const std::string&	getTarget() const;
			void	_execute() const;
};

#endif