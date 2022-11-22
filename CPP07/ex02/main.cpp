/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:19 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/22 12:07:19 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include "Array.tpp"

#include <iostream>
#include <stdlib.h> 

// int main()
// {
// 	try {
// 	Array<int> a;
// 	Array<int> b(3);

// 	std::cout << "a.size(): " << a.size() << std::endl;
// 	std::cout << "b.size(): " << b.size() << std::endl;

// 	a = b;
// 	std::cout<<std::endl;
// 	std::cout << "a.size(): " << a.size() << std::endl;
// 	std::cout<<std::endl;


// 	std::cout << "a.size(): " << a.size() << std::endl;
// 	std::cout << "b.size(): " << b.size() << std::endl;
// 	b[0] = 2;
// 	std::cout<<"b[0]== "<<b[0]<<std::endl;
// 	a = b;
// 	b[0] = 8;
// 	std::cout<<"b[0]== "<<b[0]<<std::endl;
// 	std::cout<<"a[0] == " << a[0]<<std::endl;
// 	b[-2] = 9;
// 	std::cout<<"b[-2]== "<<b[-2]<<std::endl;

// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// }



#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}