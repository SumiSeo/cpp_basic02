#include <cstring>
#include <iostream>

class Fixed
{
  private:
	int fixed_point;
	const static int bits = 8;

  public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &orginal);
	Fixed &operator=(const Fixed &original);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};