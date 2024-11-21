#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
};
Fixed::Fixed(int value)
{
	this->value = value << this->bits;
};
Fixed::Fixed(const float float_value)
{
	this->value = roundf(float_value * (1 << this->bits));
};
Fixed::~Fixed(void){};
Fixed::Fixed(const Fixed &original)
{
	this->value = original.value;
};
bool Fixed::operator>(Fixed const &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool Fixed::operator<(Fixed const &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool Fixed::operator>=(Fixed const &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool Fixed::operator<=(Fixed const &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool Fixed::operator==(Fixed const &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool Fixed::operator!=(Fixed const &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}
Fixed Fixed::operator+(Fixed const &ref) const
{
	Fixed ret(this->toFloat() + ref.toFloat());
	return (ret);
}

Fixed Fixed::operator-(Fixed const &ref) const
{
	Fixed ret(this->toFloat() - ref.toFloat());
	return (ret);
}

Fixed Fixed::operator*(Fixed const &ref) const
{
	Fixed ret(this->toFloat() * ref.toFloat());
	return (ret);
}

Fixed Fixed::operator/(Fixed const &ref) const
{
	Fixed ret(this->toFloat() / ref.toFloat());
	return (ret);
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	const Fixed ret(*this);
	this->value++;
	return (ret);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	const Fixed ret(*this);
	this->value--;
	return (ret);
}
float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits));
}
int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
};
int Fixed::getRawBits(void) const
{
	return (this->value);
};
void Fixed::setRawBits(int const raw)
{
	this->value = raw;
};
Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
}

const Fixed &Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return (ref1);
	else
		return (ref2);
}

const Fixed &Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 >= ref2)
		return (ref1);
	else
		return (ref2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
