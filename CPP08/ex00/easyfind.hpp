/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:24:15 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/23 14:40:30 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator    easyfind(T x, int nb)
{
    typename T::iterator it;
    it= std::find(x.begin(), x.end(), nb);
    if (it == x.end())
        throw (std::exception());
    return(it);
}

#endif

// http://tvaira.free.fr/dev/cours/cours-conteneurs-stl.pdf
// https://cplusplus.com/reference/stl/