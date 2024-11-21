#ifndef __FIXED__POINT__HPP
# define __FIXED__POINT__HPP

# include <cstring>
# include <iostream>

class Fixed
{
  private:
	int value;
	int float_value;
	const static int bits = 8;

  public:
	Fixed(int value);
	Fixed(const float float_value);
	~Fixed(void);
	Fixed(const Fixed &original);
	Fixed &operator=(const Fixed &original);
	float toFloat(void) const;
	int toInt(void) const;
};

#endif /*__FIXED__POINT__HPP*/