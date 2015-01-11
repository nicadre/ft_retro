// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AShip.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:24:24 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 19:35:06 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AShip.class.hpp"

/* ****************************** Constructors ****************************** */

AShip::AShip(void) {
}

AShip::AShip(AShip const & src) : Mobil(src) {
	*this = src;
}

AShip::AShip(float x, float y) : Mobil(x, y) {
}

/* ****************************** Destructors ******************************* */

AShip::~AShip(void) {
}

/* *************************** Operator Overload **************************** */

AShip const			&AShip::operator=(AShip const & rhs) {
	Mobil::operator=(rhs);
	this->_HP = rhs.getHP();
	this->_canShot = rhs.getCanShot();
	return (*this);
}

void				AShip::die(void) {
	this->_HP = 0;
}

int					AShip::getHP(void) const {
	return(this->_HP);
}

void				AShip::setHP(int const HP) {
	this->_HP = HP;
}

bool				AShip::getCanShot(void) const {
	return(this->_canShot);
}

void				AShip::setCanShot(bool const canShot) {
	this->_canShot = canShot;
}
