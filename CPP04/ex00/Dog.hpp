
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:55:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/27 17:00:44 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
			std::string		_type;
	protected:
	public:
			Dog();
			Dog(Dog const &copy);
			~Dog();
			Dog& operator=(Dog const &rhs);
            std::string     getType();
			virtual void	makeSound();

};
#endif