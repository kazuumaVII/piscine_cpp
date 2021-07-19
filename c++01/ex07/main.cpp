/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:01:38 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 18:16:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		error_arg(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error argument" << std::endl;
		return (1);
	}
	for (int i = 1; i < 4; i++)
	{
		std::string		str = av[i];
		if (!str.size())
		{
			std::cout << "Error parameter" << std::endl;
			return (1);
		}
	}
	return (0);
}

int main(int ac, char **av)
{
	if (error_arg(ac, av))
		return (-1);

	std::string line;
	std::string file(av[1]);
	std::string str1(av[2]);
	std::string str2(av[3]);
	std::ifstream ifs(file);

	if (ifs.fail())
	{
	 	std::cout << "Error replace file" << std::endl;
		return (1);
	}
	file.replace(0, 16, "FILENAME.replace");
	std::ofstream f_replace(file.c_str());
	if (!f_replace|| !ifs)
	{
		std::cout << "Error files" << std::endl;
		return (1);
	}
	while (std::getline(ifs, line))
	{
		while(line.find(str1) != std::string::npos)
			line.replace(line.find(str1), str1.size(), str2);
		f_replace << line << std::endl;
	}
	return (0);
}

