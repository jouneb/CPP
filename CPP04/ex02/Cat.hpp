/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:55:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/07 14:58:16 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
			Brain*	_brain;
	public:
			Cat();
			Cat(Cat const &copy);
			~Cat();
			Cat& operator=(Cat const &rhs);
			virtual void	makeSound() const;

};
#endif