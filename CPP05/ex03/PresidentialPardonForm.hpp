/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:28 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 15:13:20 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define	PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private :
			std::string		_target;
			PresidentialPardonForm();
	public :
			PresidentialPardonForm(const std::string &target);
			PresidentialPardonForm(PresidentialPardonForm const &copy);
			PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
			
			virtual ~PresidentialPardonForm();

			const std::string&	getTarget() const;
			void	_execute() const;
};

#endif