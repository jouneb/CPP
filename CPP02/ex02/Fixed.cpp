# include "Fixed.hpp"
# include <iostream>
# include <math.h>

const int Fixed::_binaryPos = 8;

Fixed::Fixed(): _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed::Fixed(const int i): _rawBits(0)
{
	// std::cout << "Int constructor Called" << std::endl;
	this->_rawBits = i << this->_binaryPos;
	return;
}

Fixed::Fixed(const float f):_rawBits(0)
{
	// std::cout << "Float constructor Called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_binaryPos));
	return;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	// std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << (float)rhs.getRawBits() / (1 << rhs.getBinaryPos());
	return (o);
}

int		Fixed::getBinaryPos(void)	const
{
	return(this->_binaryPos);
}
int		Fixed::getRawBits(void)	const
{
	// std::cout << "getRwaBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
	// std::cout << "setRawBits member function called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	//doit convertir la  valeur en virgule fixe en nombre a virgule flottante.
	return ((float)this->_rawBits / (1 << this->_binaryPos));
}

int		Fixed::toInt(void) const
{
	return(this->_rawBits >> this->_binaryPos);
}



//OPERATEURS ARITHMETIQUE

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits + rhs._rawBits);
	return(tmp);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits - rhs._rawBits);
	return(tmp);
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{

	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits * rhs._rawBits >>this->_binaryPos);
	return(tmp);
}


 // OPERATEURS DE COMPARAISON

bool	Fixed::operator<(Fixed const& rhs) const
{
	return (this->_rawBits < rhs._rawBits);
};

bool	Fixed::operator>(Fixed const& rhs) const
{
	return (this->_rawBits > rhs._rawBits);
};

bool	Fixed::operator>=(Fixed const& rhs) const
{
	return (this->_rawBits >= rhs._rawBits);
};

bool	Fixed::operator<=(Fixed const& rhs) const
{
	return (this->_rawBits <= rhs._rawBits);
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	return (this->_rawBits == rhs._rawBits);
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	return (this->_rawBits != rhs._rawBits);
}

//OPERATEURS D'INCREMENTATION ET DEREMENTATION


Fixed&	Fixed::operator++()
{
	this->_rawBits++;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if(nb1 > nb2)
		return(nb2);
	else
		return(nb1);
}

const Fixed&	Fixed::min(Fixed const& nb1, Fixed const& nb2)
{
	if(nb1 > nb2)
		return(nb2);
	else
		return(nb1);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if(nb1 < nb2)
		return(nb2);
	else
		return(nb1);
}

Fixed const& Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if(nb1 < nb2)
		return(nb2);
	else
		return(nb1);
}

