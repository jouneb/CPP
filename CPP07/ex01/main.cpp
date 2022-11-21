/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:52:24 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/21 17:09:39 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void	increment(T &tableau)
{
	tableau = 5;
}
template<typename T>
void	changeletter(T &tableau)
{
	tableau = 'a';
}
template<typename T>
void	show_it(T &tableau)
{
	std::cout << tableau << std::endl;
	return ;
}

int main()
{
	{
		int	mon_tab[5] = {0, 1, 2, 3, 4};

		iter<int>(mon_tab, 5, &(show_it<int>));
		iter<int>(mon_tab, 5, &(increment<int>));
		iter<int>(mon_tab, 5, &(show_it<int>));
		std::cout << std::endl;
	}
	{
		char	mon_tab[3] = {'a', 'b', 'c'};

		iter<char>(mon_tab, 3, &(show_it<char>));
		iter<char>(mon_tab, 3, &(changeletter<char>));
		iter<char>(mon_tab, 3, &(show_it<char>));
		std::cout << std::endl;
	}
}