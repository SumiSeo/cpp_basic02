#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
};
Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bits;
};
Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_value * (1 << this->bits));
};
Fixed::~Fixed(void)
{
	std::cout << "Desctructor called" << std::endl;
};
Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = original.value;
};
Fixed &Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->value = original.value;
	}
	return (*this);
};
float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits));
}
int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}