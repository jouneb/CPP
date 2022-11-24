/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:12:44 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/24 18:25:59 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vect(15); //vecteur de 5 entiers.
    vect[3] = 12;
    vect[5] = 9;
    vect[10] = 12;
    try 
    {
    std::cout<< *easyfind(vect, 12) << std::endl;
    std::cout<< *easyfind(vect, 9) << std::endl;
    std::cout<< *easyfind(vect, 1) << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
