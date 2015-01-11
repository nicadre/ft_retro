#ifndef MISSIL_CLASS_HPP
# define MISSIL_CLASS_HPP

#include <iostream>
#include "general.hpp"

class Missil : public Mobil {

private:

	float		_x;
	float		_y;

public:

	Missil(void);
	Missil(Missil const & missil);
	Missil(float x, float y);
	~Missil(void);

	Missil &	operator=(Missil const & rhs);

	float	getX(void) const;
	void	setX(float const x);
	float	getY(void) const;
	void	setY(float y);

	static int	nbr;

};

#endif
