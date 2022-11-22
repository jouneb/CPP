/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:18:50 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/22 11:58:09 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class	Array
{
	private:
		T*		_array;
		int 	_size;

	public :
			Array();
			~Array();
			Array(int n);
			Array(Array &copy);
			Array& operator=(Array const &rhs);
			T&	operator[](int n);
			
			int	size() const;
};

#endif
