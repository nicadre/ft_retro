class Missil {

#include <iostream>

private:

	float		_x;
	float		_y;

public:

	Missil(void);
	Missil(Missil const & missil);
	~Missil(void);

	Missil &	operator=(Missil const & rhs);

	float	getX(void) const;
	void	setX(float const x);
	float	getY(void) const;
	void	setY(float y);

	static int	nbr;

};
