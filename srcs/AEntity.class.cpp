// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AEntity.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 15:07:52 by niccheva          #+#    #+#             //
//   Updated: 2015/01/10 18:32:22 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AEntity.class.hpp"

AEntity::AEntity(void) : _x(0), _y(0), _form('x') {}

AEntity::AEntity(AEntity const & src) {
	*this = src;
}

AEntity const		&AEntity::operator=(AEntity const & rhs) {
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	this->_form = rhs.getForm();

	return (*this);
}

AEntity::~AEntity(void) {}

int				AEntity::getX(void) const {
	return (this->_x);
}

int				AEntity::getY(void) const {
	return (this->_y);
}

char			AEntity::getForm(void) const {
	return (this->_form);
}
