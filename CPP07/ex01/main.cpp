/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:52:24 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/22 16:41:29 by jbouyer          ###   ########.fr       */
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

// int main()
// {
// 	{
// 		int	mon_tab[5] = {0, 1, 2, 3, 4};

// 		iter(mon_tab, 5, &(show_it));
// 		iter(mon_tab, 5, &(increment));
// 		iter(mon_tab, 5, &(show_it));
// 		std::cout << std::endl;
// 	}
// 	{
// 		char	mon_tab[3] = {'a', 'b', 'c'};

// 		iter(mon_tab, 3, &(show_it));
// 		iter(mon_tab, 3, &(changeletter));
// 		iter(mon_tab, 3, &(show_it));
// 		std::cout << std::endl;
// 	}
// }

class Awesome
{
	public:
	Awesome(void):_n(42){return;}
	int get(void) const {return this->_n;}
	private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o <<rhs.get(); return o;}
template <typename T>
void print(T const &x){std::cout<<x<<std::endl;return;}
int main()
{
	int tab[]={0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	return(0);
}

