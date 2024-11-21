#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
};
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};
Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = original.getRawBits();
};
Fixed &Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->fixed_point = original.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
};
void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
};
