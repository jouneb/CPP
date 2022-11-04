/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:46:37 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/04 15:05:56 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	private : 
				std::string		ideas[100];
	public :
			Brain();
			Brain(Brain const &copy);
			~Brain();
			Brain& operator=(Brain const &rhs);
};

#endif