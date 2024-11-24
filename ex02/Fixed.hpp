#ifndef __FIXED__HPP
# define __FIXED__HPP

# include <cmath>
# include <cstring>
# include <iostream>

class Fixed
{
  private:
	int value;
	const static int bits = 8;

  public:
	Fixed(void);
	Fixed(int value);
	Fixed(const float float_value);
	~Fixed(void);
	Fixed(const Fixed &original);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	bool operator>(Fixed const &ref) const;
	bool operator<(Fixed const &ref) const;
	bool operator>=(Fixed const &ref) const;
	bool operator<=(Fixed const &ref) const;
	bool operator==(Fixed const &ref) const;
	bool operator!=(Fixed const &ref) const;

	Fixed operator+(Fixed const &ref) const;
	Fixed operator-(Fixed const &ref) const;
	Fixed operator/(Fixed const &ref) const;
	Fixed operator*(Fixed const &ref) const;

	Fixed &operator++(void);
	const Fixed operator++(int);
	Fixed &operator--(void);
	const Fixed operator--(int);

	static Fixed &min(Fixed &ref1, Fixed &ref2);
	static const Fixed &min(Fixed const &ref1, Fixed const &ref2);
	static Fixed &max(Fixed &ref1, Fixed &ref2);
	static const Fixed &max(Fixed const &ref1, Fixed const &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif /*__FIXED__HPP*/