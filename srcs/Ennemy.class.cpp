// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:15:31 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 19:39:21 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ennemy.class.hpp"

/* ****************************** Constructors ****************************** */

Ennemy::Ennemy(void) {
	this->setForm('C');
}

Ennemy::Ennemy(float x, float y) : AShip(x, y) {
	this->setForm('C');
}

Ennemy::Ennemy(Ennemy const & src) : AShip(src) {
	*this = src;
	this->setForm('C');
}

/* ****************************** Destructors ******************************* */

Ennemy::~Ennemy(void) {
}

/* *************************** Operator Overload **************************** */

Ennemy const			&Ennemy::operator=(Ennemy const & rhs) {
	AShip::operator=(rhs);
	return (*this);
}

void					Ennemy::shoot(void) const {

}

void					Ennemy::move(void) {
	this->setX(this->getX() - 0.03f);
	this->setY(this->getY());
}
