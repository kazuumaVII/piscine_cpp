/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:53:01 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 12:24:31 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"

Squad::Squad()
{
	l_first = NULL;
	return ;
}

Squad::Squad(Squad const &ref)
{
	*this = ref;
	return ;
}

Squad				&Squad::operator=(Squad const &ref)
{
	lstClear();
	for (int i = 0; i < ref.getCount(); i++)
		push(ref.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad()
{
	lstClear();
	return ;
}

void Squad::lstClear()
{
	t_list *list = l_first;
	t_list *next;

	while (list)
	{
		next = list->next;
		delete list->space_marine;
		delete list;
		list = next;
	}
	l_first = NULL;
	return ;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	/*renvoi le pointeur correspondant a l'index*/
	t_list *list = l_first;
	while (list && n)
	{
		list = list->next;
		n--;
	}
	return (list->space_marine);
}

int Squad::push(ISpaceMarine* push)
{
	/*fonction qui rajoute un element au squad*/
	int size = 1;
	t_list *list = l_first;

	if (push == NULL)
		return getCount();
	if (list == NULL)
	{
		/*je cree un element si la list est vide */
		l_first = new t_list();
		l_first->space_marine = push;
		l_first->next = NULL;
	}
	else
	{
		/*sinon si elle n'est pas vide */
		while (list->next != NULL)
		{
			list = list->next;
			size++;
		}
		list->next = new t_list();
		list->next->space_marine = push;
		list->next->next = NULL;
	}
	return (size);
}

int					Squad::getCount() const
{
	t_list *list = l_first;
	int size = 0;

	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}
