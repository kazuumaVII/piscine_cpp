/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:01:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:05:16 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span()
{
	return ;
}

Span::Span(unsigned int n)
{
	this->_stock = n;
	return ;
}

Span::Span(Span const &ref)
{
	*this = ref;
	return ;
}

Span					&Span::operator=(Span const &ref)
{
	this->_stock = ref._stock;
	this->_vnb = ref._vnb;
	return (*this);
}

Span::~Span()
{
	return ;
}

void			Span::addNumber(unsigned int nb)
{
	if (this->_vnb.size() >= _stock)
	{
		throw std::out_of_range("Out_of_range");
		return ;
	}
	this->_vnb.push_back(nb);
	return ;
}



unsigned int		Span::shortestSpan()
{
	int 						i = 0;;
	int 						small = 0;
	std::vector<int>			tab(this->_vnb);
	std::vector<int>			v2;

	if (tab.size() < 2)
		throw std::logic_error("Not enough number");

	std::sort(tab.begin(), tab.end());

	std::vector<int>::const_iterator it1 = tab.begin();
	std::vector<int>::const_iterator ite1 = tab.end();

	while(it1 != ite1)
	{
		if (tab[i + 1] != *ite1)
			v2.push_back(tab[i + 1] - tab[i]);
		i++;
		it1++;
	}
	std::vector<int>::const_iterator it = v2.begin();
	std::vector<int>::const_iterator ite = v2.end();
	small = *std::min_element(it, ite);
	return (small);
}


unsigned int		Span::longestSpan(void)
{
	std::vector<int>			tab(this->_vnb);
	unsigned int				r = 0;

	if (tab.size() < 2)
		throw std::logic_error("Not enough number");
	int		max = *std::max_element(tab.begin(), tab.end());
	int		min = *std::min_element(tab.begin(), tab.end());
	r= max - min;
	return (r);
}

std::ostream			&operator<<(std::ostream &os, Span const &ref)
{
	std::vector<int>		tab = ref.getTab();

	os << "Span = { ";
	if (!tab.size())
		os << " empty ";
	for (unsigned int i = 0; i < tab.size(); i++)
	{
		os << tab[i];
		if (i < tab.size() - 1)
			os << ", ";
	}
	os << " }";
	return os;
}

std::vector<int>		Span::getTab() const { return this->_vnb; }
