// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Missil.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 14:35:17 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 19:22:46 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Missil.class.hpp"

Missil::Missil(void) {
	this->setForm('-');
}

Missil::Missil(Missil const & missil) : Mobil(missil) {
	this->setForm('-');

	*this = missil;
}

Missil::Missil(float x, float y) : Mobil(x, y) {
	this->setForm('-');
}

Missil::~Missil(void) {

}

Missil &	Missil::operator=(Missil const & rhs) {
	Mobil::operator=(rhs);
	if (this != &rhs)
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return *this;
}
void				Missil::move(void) {
	this->setX(this->getX() + 0.1f);
	this->setY(this->getY());
}

void				Missil::setX(float const x) {
	Mobil::setX(x);
}

void				Missil::setY(float const y) {
	Mobil::setY(y);
}
