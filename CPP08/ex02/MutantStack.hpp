/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:51:13 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/25 17:20:22 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T >
class MutantStack : public std::stack<T>
{
    public : 
            MutantStack<T>():std::stack<T>()
            {
                return;
            }
            ~MutantStack<T>(){return;}
            MutantStack<T>(MutantStack<T> const &copy) : std::stack<T>()
            {
                *this = copy;
                return;
            }
            MutantStack<T>& operator=(MutantStack<T> const &rhs)
            {
                this->c = rhs.c;
                return;
            }
        
            typedef typename std::stack<T>::container_type::iterator iterator;
            // typedef std::deque<T>::std::iterator iterator;

            iterator    begin()
            {
               return(this->c.begin());
            }

            iterator    end()
            {
               return(this->c.end());
            }
};