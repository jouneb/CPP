/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:25:50 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/25 15:28:49 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vecteur;
    Span sp = Span(20541);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    for (int i = 1; i <12263; i++)
        vecteur.push_back(i * 42);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::vector<int>::iterator start=vecteur.begin();
    std::vector<int>::iterator end=vecteur.end();
    sp.addNumbers(start, end, 11);
    // std::cout << sp.shortestSpan() << std::endl;
    return(0);
}