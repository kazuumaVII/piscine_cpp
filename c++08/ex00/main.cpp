/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:02:23 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:01:31 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template<typename T>
void			print_c(T const &cont)
{
	typename T::const_iterator it;

	std::cout << "Container = { ";
	for(it = cont.begin(); it!=cont.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "}" << std::endl;
	return ;
}

template<typename T>
void			search_c(T const &cont)
{
	std::vector<int>c = cont;
	try
	{
		print_c(c);
		easyfind(c, 19);
		std::cout << "\e[31m\e[1m \t\tFound" <<  "\e[0m\n";
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return ;
}

int				 main()
{
	std::vector<int>c1(4);
		c1[0] = 4;
		c1[1] = 7;
		c1[2] = 10;
		c1[3] =	9;

	search_c(c1);
	c1.push_back(19);
	search_c(c1);
	c1.pop_back();
	search_c(c1);
	return (0);
}
