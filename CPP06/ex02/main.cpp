/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:01:18 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:18:45 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Base*	generate(void)
{
	srand(time(NULL));
	int i;
	i = rand() % 3;
	
	switch (i)
	{
		case 0 : 
				return(new A());
		case 1 : 
				return(new B());
		case 2 : 
				return(new C());
		default:
			return(NULL);
	}
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "The type is A!" << std::endl;
	else if (b != NULL)
		std::cout << "The type is B!" << std::endl;
	else if (c != NULL)
		std::cout << "The type is C!" << std::endl;
}

// quand c'est un pointeur dynamic cast retourne null quand c'est une reference dynmaic cast retourne une exception;

void	identify(Base& p)
{
	try
	{
		A* a = dynamic_cast<A*>(p);
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "The refp type is A!" << std::endl;
	}
	catch(std::exception &e)
	{}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "The refp type is B!" << std::endl;
	}
	catch(std::exception &e)
	{}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout<<"The refp type is C"<<std::endl;
	}
	catch(std::exception &e)
	{}

}

int main()
{

	Base* p;
	
	
	p = generate();
	Base& rp = *p;
	identify(p);
	identify(rp);
	delete p;

	return (0);
}