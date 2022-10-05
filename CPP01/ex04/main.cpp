/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:07:38 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/05 15:38:43 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void replace_str(std::string &str, std::string s1, std::string s2)
{
	std::size_t pos = 0;
	std::size_t	found;

	while (str.find(s1, pos) != std::string::npos)
	{
		found = str.find(s1, pos);
		str.erase(found, s1.size());
		str.insert(found, s2);
		pos = found + s2.size();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<< "Invalid args" << std::endl;
		return (1);
	}	
	std::string infile = argv[1];
	std::string	outfile = infile + ".replace";
	std::ifstream	ifs(infile.c_str());
	if	(ifs.is_open() == false)
	{
		std::cout << "Error file" << std::endl;
		return (1);
	}	
	std::string			s;
	std::ofstream	ofs(outfile.c_str());
	while(!ifs.eof())
	{
		std::getline(ifs,s);
		replace_str(s, argv[2], argv[3]);
		ofs << s;
		if (!ifs.eof())
		{
			ofs << std::endl;
		}
	}
	ofs.close();
	ifs.close();
}