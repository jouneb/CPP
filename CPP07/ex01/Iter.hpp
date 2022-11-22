/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:35 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/22 15:15:01 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T  *tableau, int size, void (*mafonction)(T &tableau))
{
	int i = 0;
	while(i < size)
	{
		mafonction(tableau[i]);
		i++;
	}
}

#endif