
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
#include "Brain.hpp"

class Dog : public Animal
{
	private :
			Brain*	_brain;
	public:
			Dog();
			Dog(Dog const &copy);
			~Dog();
			Dog& operator=(Dog const &rhs);
			void			makeSound() const;

};
#endif