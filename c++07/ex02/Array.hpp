/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:04:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/08 13:48:10 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string.h>
# include <exception>

//////////////////////////////// prototype /////////////////////
template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int nb);
		virtual ~Array();
		Array(Array const &ref);
		Array &operator=(Array const &ref);
		T  &operator[](int i) const ;

		int 			size(void) const ;

	private:
		T		*_array;
		int 	_size;
};
template< typename T>
std::ostream			&operator<<(std::ostream &os, Array<T> const &ref);


//////////////////////////// constructeur sans parametre ////////////////////////////////////
template<typename T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_size = 0;
	return ;
}

//////////////////////////// constructeur unsigned int  n ////////////////////////////////////
template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_array = new T[n];
	return ;
}

//////////////////////////// constructeur copy ////////////////////////////////////
template< typename T >
Array<T>::Array(Array<T> const &ref)
{
	*this = ref;
	return ;
}

//////////////////////////// deconstructeur ////////////////////////////////////
template< typename T >
Array<T>::~Array()
{
	delete[] this->_array;
	return ;
}


//////////////////////////// Surcharge operateur ////////////////////////////////////
template< typename T >
Array<T> &Array<T>::operator=(Array const &ref)
{
	if (!ref._size)
		return (*this);
	if (this->_size)
		delete[] this->_array;
	this->_size = ref._size;
	if (this->_size)
		this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = ref._array[i];
	return (*this);
}

//////////////////////////// Verif limite  std::exeception ////////////////////////////////////
template< typename T >
T & Array<T>::operator[](int i) const
{
	if (i >= this->_size || i < 0)
		throw std::out_of_range("Out_of_range");
	return (this->_array[i]);
}


//////////////////////////// overload operator (affichage)////////////////////////////////////
template< typename T >
std::ostream 				&operator<<(std::ostream &os, Array<T> const &ref)
{
	for (int i = 0; i < ref.size(); i++)
		os << "{Array[" << i << "] = " << ref[i] << "}  ";
	std::cout << std::endl;
	return (os);
}

//////////////////////////// return de la size ////////////////////////////////////
template< typename T >
int Array<T>:: size()const{ return this->_size;}

#endif
