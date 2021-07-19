/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:01:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:05:49 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }

	std::cout << std::endl;

	std::string  str[] = {"Ca ", "marche ", "bien "};
	std::list<std::string>	m_list;

	for (int i = 0; i < 3; i++)
		m_list.push_back(str[i]);
	std::list<std::string>::iterator		it2;
		for (it2 = m_list.begin(); it2 != m_list.end(); ++it2)
			std::cout << *it2;
	std::cout << std::endl;

	return (0);
}
