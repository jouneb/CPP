/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:03 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 17:28:00 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private :
			std::string _name;
			int			_grade;
	protected:
	public:
			Bureaucrat();
			Bureaucrat(Bureaucrat& const copy);
			Bureaucrat& operator=(Bureaucrat& const rhs)
			~Bureaucrat();

			std::string& const getName() const;
			int	 getGrade() const;

			void	upGrade();
			void	downGrade();
};


#endif