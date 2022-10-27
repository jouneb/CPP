/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:47:05 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/26 17:58:07 by jbouyer          ###   ########.fr       */
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
			std::string	type;
	public:	
			Animal();
			Animal(Animal const &copy);
			~Animal();
			Animal& operator=(Animal const &rhs);
			makeSound(std::string sound);
};

#endif