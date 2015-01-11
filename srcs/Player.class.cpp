// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:49:36 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 11:01:13 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Player.class.hpp"

/* ****************************** Constructors ****************************** */

Player::Player(void) {
}

Player::Player(Player const & src) : AShip(src) {
	*this = src;
}

/* ****************************** Destructors ******************************* */

Player::~Player(void) {
}

/* *************************** Operator Overload **************************** */

Player const			&Player::operator=(Player const & rhs) {
	AShip::operator=(rhs);
	return (*this);
}

void					Player::shoot(void) const {
	
}

std::string				Player::getName(void) const {
	return (this->_name);
}

int						Player::getLevel(void) const {
	return (this->_level);
}
