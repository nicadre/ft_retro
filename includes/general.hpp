// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:18:13 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 21:07:28 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GENERAL_HPP
# define GENERAL_HPP

#include <curses.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <cmath>

#include "AEntity.class.hpp"
#include "Mobil.class.hpp"
#include "AShip.class.hpp"
#include "Missil.class.hpp"
#include "Ennemy.class.hpp"
#include "Player.class.hpp"


#define WIDTH 150
#define HEIGHT 25
#define QUIT 113
#define SPC 32
#define DELAY 500

class Player;

typedef struct			s_entity {
	AEntity *			entity;
	struct s_entity *	next;
}						t_entity;

extern t_entity *		entities;
extern Player *			player;

t_entity *		newEntity(AEntity * entityNext);
void			addEntity(t_entity ** list, AEntity * entity);
void			deleteEntity(t_entity * entity);

void	init(void);
void	loopGame(void);

#endif
