/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:51:37 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/14 14:28:14 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;

class	RobotomyRequestForm : public Form
{
	private:
		std::string		_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);

		virtual ~RobotomyRequestForm();

		const std::string&	getTarget() const;
		void	_execute() const;

};
#endif 