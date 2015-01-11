// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ship.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:24:24 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 10:24:58 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ship.class.hpp"

/* ****************************** Constructors ****************************** */

Ship::Ship(void) {
}

Ship::Ship(Ship const & src) : Mobil(src) {
	*this = src;
}

/* ****************************** Destructors ******************************* */

Ship::~Ship(void) {
}

/* *************************** Operator Overload **************************** */

Ship const			&Ship::operator=(Ship const & rhs) {
	Mobil::operator=(rhs);
	return (*this);
}
