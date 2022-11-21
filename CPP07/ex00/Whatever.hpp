/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:37:37 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/21 14:21:03 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
const T&	max(T const &x, T const &y)
{
	return(y>=x ? y : x);
}

template<typename T>
const T&	min(T const &x, T const &y)
{
	return(y<=x ? y : x);
}

template<typename T>
void	swap(T &x, T &y)
{
	T c;
	c = x;
	x = y;
	y = c;
}

#endif