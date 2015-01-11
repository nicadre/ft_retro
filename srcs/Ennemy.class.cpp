// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:15:31 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 21:32:22 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ennemy.class.hpp"

/* ****************************** Constructors ****************************** */

Ennemy::Ennemy(void) {
	this->setForm('C');
}

Ennemy::Ennemy(float x, float y) : AShip(x, y) {
	this->setForm('C');
}

Ennemy::Ennemy(Ennemy const & src) : AShip(src) {
	*this = src;
	this->setForm('C');
}

/* ****************************** Destructors ******************************* */

Ennemy::~Ennemy(void) {
}

/* *************************** Operator Overload **************************** */

Ennemy const			&Ennemy::operator=(Ennemy const & rhs) {
	AShip::operator=(rhs);
	return (*this);
}

void					Ennemy::move(void) {
	this->setX(this->getX() - 0.03f);
	this->setY(this->getY());

	t_entity		*current;

	current = entities;
	while (current != NULL)
	{
		if (current->entity != this && roundf(current->entity->getX()) == roundf(this->getX())) {
			if (roundf(current->entity->getY()) == roundf(this->getY())) {
				deleteEntity(current);

				current = entities;
				while (current->entity != this)
					current = current->next;
				deleteEntity(current);
				Ennemy::score++;
				break;
			}
		}
		current = current->next;
	}
	if (roundf(this->getX()) == roundf(player->getX())) {
		if (roundf(this->getY()) == roundf(player->getY())) {
			delete player;
			delete this;
		}
	}
}

int		Ennemy::score = 0;
