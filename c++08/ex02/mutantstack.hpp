/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:01:28 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:06:11 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>


template <typename T>
class		MutantStack : virtual public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack<T> const &ref) {*this = ref ;}
		virtual ~MutantStack() {}
		MutantStack 			&operator=(MutantStack<T> const &ref);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator				begin() { return this->c.begin(); }
		iterator 				end() {return this->c.end(); }

	private :
};

#endif

