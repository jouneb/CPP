/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:44:17 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/24 18:39:03 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
            Span();
            unsigned int     _n;
            unsigned int    _count;
            std::vector<int> _vector;
    public:
            Span(unsigned int nb);
            ~Span();
            Span(Span const &copy);
            Span& operator=(Span const &rhs);
            unsigned int    getN() const;
            unsigned int    getCount() const;
            std::vector<int> getVector() const;
            void addNumber(int nb);
            int shortestSpan();
            int longestSpan();
   class ToomuchException : public std::exception
   {
        public:
                virtual const char *what() const throw()
                {
                        return("Impossible, too much numbers.");
                }
   };
   class NotenoughException : public std::exception
   {
        public:
                virtual const char *what() const throw()
                {
                        return("Impossible, not enough numbers.");
                }
   };
          

};