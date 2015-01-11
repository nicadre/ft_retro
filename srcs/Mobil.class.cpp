// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Mobil.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:08:31 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 18:52:05 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Mobil.class.hpp"

/* ****************************** Constructors ****************************** */

Mobil::Mobil(void) {
}

Mobil::Mobil(Mobil const & src) : AEntity(src) {
	*this = src;
}

Mobil::Mobil(float x, float y) : AEntity(x, y) {
}

/* ****************************** Destructors ******************************* */

Mobil::~Mobil(void) {
}

/* *************************** Operator Overload **************************** */

Mobil const			&Mobil::operator=(Mobil const & rhs) {
	AEntity::operator=(rhs);
	return (*this);
}

void				Mobil::move(float x, float y) {
	if (x >= 0)
		this->setX(x);
	if (y >= 0 )
		this->setY(y);
}

void				Mobil::setX(float const x) {
	AEntity::setX(x);
}

void				Mobil::setY(float const y) {
	AEntity::setY(y);
}

void				Mobil::setForm(char const form) {
	AEntity::setForm(form);
}
