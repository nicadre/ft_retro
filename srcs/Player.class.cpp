// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:49:36 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 20:48:53 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Player.class.hpp"

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
	endwin();
	std::cout << "You loose! " << std::endl;
	_exit(0);
}

/* *************************** Operator Overload **************************** */

Player const			&Player::operator=(Player const & rhs) {
	AShip::operator=(rhs);
	return (*this);
}

void					Player::move(void) {

}


void					Player::move(float x, float y) {
	if (x >= 0)
		this->_x = x;
	if (y >= 0)
		this->_y = y;

	t_entity		*current;

	current = entities;
	while (current != NULL)
	{
		if (roundf(current->entity->getX()) == roundf(this->getX())) {
			if (roundf(current->entity->getY()) == roundf(this->getY())) {
				deleteEntity(current);
				delete this;
			}
		}
		current = current->next;
	}
}

std::string				Player::getName(void) const {
	return (this->_name);
}

int						Player::getLevel(void) const {
	return (this->_level);
}
