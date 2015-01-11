#include "Missil.class.hpp"

Missil::Missil(void) : _x(-1), y(-1) {

}

Missil::Missil(Missil const & missil) {
	*this = missil;
	Missil::nbr++;
}

Missil::~Missil(void) {

}

Missil &	Missil::operator=(Missil const & rhs) {
	if (this != &missil)
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return *this;
}

float	Missil::getX() const {
	return(this->_x);
}

void	Missil::setX(float const x) {
	this->_x = x;
}

float	Missil::getY() const {
	return(this->_Y);
}

void	Missil::setY(float const y) {
	this->_y = y;
}

int	nbr = 0;
