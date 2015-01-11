#ifndef MISSIL_CLASS_HPP
# define MISSIL_CLASS_HPP

#include <iostream>
#include "general.hpp"

class Missil : public Mobil {

public:

	Missil(void);
	Missil(Missil const & missil);
	Missil(float x, float y);
	~Missil(void);

	Missil &	operator=(Missil const & rhs);
	void				setX(float const x);
	void				setY(float const y);
	void				move(void);
};

#endif
