#include "Fixed.hpp"

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bits;
};
// Fixed::Fixed(const float float_value)
// {
// 	std::cout << "Float constructor called" << std::endl;
// };
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
	std::cout << "Copy assignment called" << std::endl;
	if (this != &original)
	{
		this->value = original.value;
	}
	return (*this);
};
float Fixed::toFloat(void) const
{
	return (0);
}
int Fixed::toInt(void) const
{
	return (0);
};
