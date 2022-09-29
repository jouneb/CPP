/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:00:17 by jbouyer           #+#    #+#             */
/*   Updated: 2022/09/29 17:11:40 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str;

	str = "HI THIS IS THE BRAIN";

	std::string*	strPTR = &str;

	std::string&	strREF = str;

	std::cout << "Memory address of string:           " << &str << std::endl;
	std::cout << "Memory address held by stringPTR:   " << strPTR << std::endl;
	std::cout << "Memory address held by stringREF:   " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string:                    " << str << std::endl;
	std::cout << "Value pointed by stringPTR:         " << *strPTR << std::endl;
	std::cout << "Value pointed by stringREF:         " << strREF << std::endl;
}