// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AShip.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:24:24 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 10:37:57 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AShip.class.hpp"

/* ****************************** Constructors ****************************** */

AShip::AShip(void) {
}

AShip::AShip(AShip const & src) : Mobil(src) {
	*this = src;
}

/* ****************************** Destructors ******************************* */

AShip::~AShip(void) {
}

/* *************************** Operator Overload **************************** */

AShip const			&AShip::operator=(AShip const & rhs) {
	Mobil::operator=(rhs);
	return (*this);
}

void				AShip::die(void) {
	this->_HP = 0;
}
