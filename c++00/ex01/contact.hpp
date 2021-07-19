/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:41:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/04 14:52:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

#include <iostream>
#include <string>

class Contact
{
	public:

		void		create_contact();
		void		print_contact();
		void		info_c();
		void		all_info(int c);
		void		all_info();


	private :
		std::string	info[11];

	enum
	{
		first_name,
		last_name,
		nickname,
		login,
		postal_address,
		email_address,
		phone_number,
		birthday_date,
		favorite_meal,
		underwear_color,
		darkest_secret
	};
	
};

#endif
