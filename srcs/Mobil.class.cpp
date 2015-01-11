// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Mobil.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:08:31 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 14:03:00 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Mobil.class.hpp"

/* ****************************** Constructors ****************************** */

Mobil::Mobil(void) {
}

Mobil::Mobil(Mobil const & src) : AEntity(src) {
	*this = src;
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
		this->_x = x;
	if (y >= 0 )
		this->_y = y;
}
