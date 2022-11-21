/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:19 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/21 18:32:35 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test avec : array vide, copy d'array vide afficher la size;
// tester avec une valeur et un truc copie nulle;

#include "Array.hpp"
#include "Array.tpp"

#include <iostream>

int main()
{
	try {
	Array<int> a;
	Array<int> b(3);

	std::cout << "a.size(): " << a.size() << std::endl;
	std::cout << "b.size(): " << b.size() << std::endl;

	a = b;
	std::cout<<std::endl;
	std::cout << "a.size(): " << a.size() << std::endl;
	std::cout<<std::endl;


	std::cout << "a.size(): " << a.size() << std::endl;
	std::cout << "b.size(): " << b.size() << std::endl;
	b[0] = 2;
	std::cout<<"b[0]== "<<b[0]<<std::endl;
	a = b;
	b[0] = 8;
	std::cout<<"b[0]== "<<b[0]<<std::endl;
	std::cout<<"a[0] == " << a[0]<<std::endl;
	b[-2] = 9;
	std::cout<<"b[-2]== "<<b[-2]<<std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}