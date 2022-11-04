/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:52:26 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/04 14:27:18 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	private:
	protected:
			std::string	_type;
	public :
			WrongAnimal();
			WrongAnimal(std::string const &type);
			WrongAnimal(WrongAnimal const &copy);
			virtual ~WrongAnimal();
			WrongAnimal& operator=(WrongAnimal const &rhs);
			virtual void makeSound()const;
			std::string		getType() const;
};

#endif