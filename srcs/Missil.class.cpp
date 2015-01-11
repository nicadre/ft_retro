// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Missil.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 14:35:17 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 14:41:40 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Missil.class.hpp"

Missil::Missil(void) {

}

Missil::Missil(Missil const & missil) {
	*this = missil;
	Missil::nbr++;
}

Missil::Missil(float x, float y) : _x(x), _y(y) {

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
