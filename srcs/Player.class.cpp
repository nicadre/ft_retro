// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:49:36 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 19:19:01 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Player.class.hpp"
#include "general.hpp"

/* ****************************** Constructors ****************************** */

Player::Player(void) : _name("Player1"), _level(1) {
	this->setX(2.0f);
	this->setY(HEIGHT / 2);
	this->setForm('>');
}

Player::Player(Player const & src) : AShip(src) {
	*this = src;
}

Player::Player(std::string const name) : _name(name), _level(1) {
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

void					Player::move(void) {

}

void					Player::move(float x, float y) {
	if (x >= 0)
		this->_x = x;
	if (y >= 0 )
		this->_y = y;
}

std::string				Player::getName(void) const {
	return (this->_name);
}

int						Player::getLevel(void) const {
	return (this->_level);
}
