/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:07:39 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/02 15:43:40 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

using namespace std;

int		main(int ac, char **av)
{
	int i = 1;

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	while (av[i])
	{
		int j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		if (i == ac - 1)
			cout << av[i] << endl;
		else
			cout << av[i];
		i++;
	}
	return (0);
}
