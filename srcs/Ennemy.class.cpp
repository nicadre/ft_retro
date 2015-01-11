// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:15:31 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 11:18:50 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ennemy.class.hpp"

/* ****************************** Constructors ****************************** */

Ennemy::Ennemy(void) {
}

Ennemy::Ennemy(Ennemy const & src) : AShip(src) {
	*this = src;
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
