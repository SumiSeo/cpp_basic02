#ifndef __FIXED__POINT__HPP
# define __FIXED__POINT__HPP

# include <cstring>
# include <iostream>
# include <math.h>

class Fixed
{
  private:
	int value;
	const static int bits = 8;

  public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float float_value);
	~Fixed(void);
	Fixed &operator=(const Fixed &original);
	Fixed(const Fixed &original);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif /*__FIXED__POINT__HPP*/