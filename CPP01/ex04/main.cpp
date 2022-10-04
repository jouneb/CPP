/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:07:38 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/04 18:26:11 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//deja essayer d'ouvrir un fichier et de le mettre dans un autre fichier.

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void replace_str(std::string &str, std::string s1, std::string s2)
{
	size_t pos = 0;
	size_t	found = 0;
	while(found < str.size())
	{
		size_t	found = str.find(s1, pos);
		str.erase(found, s2.size());
		str.insert(found, s2);
		pos = found + s2.size();
	}
}

int main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	std::string			s;
	// std::ofstream	ofs("test.replace");

	// ifs.open("testfile", ios::in);
	std::getline(ifs,s);
	// s >> test;
	std::cout << s << std::endl;
	replace_str(s, argv[2], argv[3]);
	// std::cout << s << std::endl;
	// ofs << s << std::endl;
	// ofs.close();
	ifs.close();
}