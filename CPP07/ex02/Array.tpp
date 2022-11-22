/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:23:14 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/22 11:58:19 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	return;
}

template<typename T>
Array<T>::Array(int n):_array(new T[n]), _size(n)
{
	int i = 0;

	while(i < n)
	{
		_array[i] =  0;
		i++;
	}
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
Array<T>::Array(Array<T> &copy):_array(new T[0]),_size(0)
{
		*this = copy;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &rhs)
{
	int i = 0;

	if (this != &rhs)
	{
		delete[] this->_array;
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		while(i < this->_size)
		{
			this->_array[i] = rhs._array[i];
			i++;
		}
	}
	return(*this);
}

template<typename T>
int	Array<T>::size() const
{
	return(this->_size);
}

template<typename T>
T&	Array<T>::operator[](int n)
{
	if (n >= this->_size || n < 0)
		throw (std::exception());
	else
		return(this->_array[n]);
}

