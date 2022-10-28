/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:55:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/27 17:00:44 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
			std::string		_type;
	protected:
	public:
			Cat();
			Cat(Cat const &copy);
			~Cat();
			Cat& operator=(Cat const &rhs);
            std::string     getType();
			virtual void	makeSound();

};
#endif