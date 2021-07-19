/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:40:16 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/07 15:51:16 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main()
{
	char				array[] = "SUPER";
	std::string			tab[3] = {"SUPER", "CA", "MARCHE"};
	float				 tab_f[5] = {0.1f, 1.1f, 2.2f, 3.3f, 4.4f};
	int					tab_i[3] = {0, 1, 2};
	char				*tab_n = NULL;

	std::cout << "\e[31m\e[1m \t\ttableau char" <<  "\e[0m\n";
	iter(array, strlen(array), print_a);

	std::cout << "\e[31m\e[1m \t\ttableau char len = 2" <<  "\e[0m\n";
	iter(array, 2, print_a);

	std::cout << "\e[31m\e[1m \t\ttableau de string" <<  "\e[0m\n";
	iter(tab, 3, print_a);

	std::cout << "\e[31m\e[1m \t\ttableau int" <<  "\e[0m\n";
	iter(tab_i, 3, print_a);

	std::cout << "\e[31m\e[1m \t\ttableau float" <<  "\e[0m\n";
	iter(tab_f, 5, print_a);

	std::cout << "\e[31m\e[1m \t\tpointeur NULL" <<  "\e[0m\n";
	iter(tab_n, 3, print_a);
	return 0;
}
