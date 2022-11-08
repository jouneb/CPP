/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:47:05 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 14:33:10 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	private:
	protected:
			std::string	_type;
	public:	
			Animal();
			Animal(std::string const &type);
			Animal(Animal const &copy);
			virtual ~Animal();
			Animal& operator=(Animal const &rhs);
			virtual void 		makeSound() const;
			std::string			getType() const;
};

#endif