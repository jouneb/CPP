/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:57:43 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/25 15:28:29 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    return;
}

Span::Span(unsigned int n):_n(n), _count(0), _vector(0)
{
    return;
}

Span::~Span()
{
    return;
}

Span::Span(Span const &copy)
{
    *this = copy;
    return;
}

Span& Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs.getN();
        this->_count = rhs.getCount();
        this->_vector= rhs.getVector();
    }
    return *this;
}

unsigned int    Span::getN() const
{
    return(this->_n);
}

unsigned int    Span::getCount() const
{
    return(this->_count);
}

std::vector<int> Span::getVector() const
{
    return(this->_vector);
}

void    Span::addNumber(int nb)
{
    if (_count < _n)
    {
        this->_vector.push_back(nb);
        _count++;
    }
    else 
        throw ToomuchException();
}

int Span::shortestSpan()
{
    int diff;
    if (this->_count <= 1)
        throw   NotenoughException();
    sort(this->_vector.begin(), _vector.end());
    // for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); ++i)
    //     std::cout << *i << ' ';
    diff = _vector[1]-_vector[0];
    for (unsigned int i = 2; i < _count; i++)
    {
        if (diff > (_vector[i] - _vector[i - 1]))
            diff = _vector[i] - _vector[i-1];        
    }
    std::cout<<"La distance min entre deux nombres est : " ;
    return(diff);
}

int Span::longestSpan()
{
    int     max;
    int     min;

    if(this->_count <= 1)
        throw NotenoughException();
    min = *std::min_element(_vector.begin(), _vector.end());
    max = *std::max_element(_vector.begin(), _vector.end());
    std::cout<<"La distance max entre deux nombres est : " ;
    return(max - min);
}