// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AEntity.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 15:07:52 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 18:14:52 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AEntity.class.hpp"

AEntity::AEntity(void) : _x(0), _y(0), _form('x') {}

AEntity::AEntity(AEntity const & src) {
	*this = src;
}

AEntity::AEntity(float x, float y) {
	this->_x = x;
	this->_y = y;
}

AEntity const		&AEntity::operator=(AEntity const & rhs) {
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	this->_form = rhs.getForm();

	return (*this);
}

AEntity::~AEntity(void) {}

float			AEntity::getX(void) const {
	return (this->_x);
}

float			AEntity::getY(void) const {
	return (this->_y);
}

char			AEntity::getForm(void) const {
	return (this->_form);
}

void			AEntity::setX(float const x) {
	this->_x = x;
}

void			AEntity::setY(float const y) {
	this->_y = y;
}

void			AEntity::setForm(char const form) {
	this->_form = form;
}
