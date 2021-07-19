/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:44:58 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/04 16:32:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>

std::string l_contact[11] =
{
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

std::string 		trim(std::string str)
{
	size_t first = 0;
	size_t last = 0;

    first = str.find_first_not_of(' ');
	if (std::string::npos == first)
	{
		return (str);
	}
	last = str.find_last_not_of(' ');
	return (str.substr(first, (last - first + 1)));
}

int				ft_full_space(std::string str)
{
	int		i;

	i = 0;
	{
		while (str[i])
		{
			if (!(str[i] == ' '))
				return (0);
			else
				i++;
		}
	}
	return (1);
}

void			Contact::create_contact()
{
	std::string 	buffer;

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Entrer " << l_contact[i] << std::endl;
		getline(std::cin, buffer);

		if (std::cin.eof())
			exit (0);
		if (!buffer.compare("") || ft_full_space(buffer))
		{
			std::cout << "Invalid input" << std::endl;
			i--;
		}

		else
			info[i] = trim(buffer);


	}
	std::cout << "\t Ajout contact termine" << std::endl;
	return ;


}


void		sub_line(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
	return ;
}

void		Contact::info_c()
{
	sub_line(info[Contact::first_name]);
	sub_line(info[Contact::last_name]);
	sub_line(info[Contact::login]);
}


void		Contact::all_info()
{
	int error = 0;

	for (int i = 0; i < 11; i++)
	{
		if (info[i].length() == 0)
			error++;
	}
	for (int i = 0; i < 11; i++)
	{
		if (error >= 1)
		{
			std::cout << "Index invalide, retour au menu\n";

			break;
		}
		std::cout << l_contact[i] << ": " << info[i] << std::endl;


	}
	return ;

}


