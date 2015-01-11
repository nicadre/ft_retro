// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:18:13 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 01:09:42 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GENERAL
# define GENERAL

#include <curses.h>
#include <iostream>
#include <unistd.h>

#define WIDTH 150
#define HEIGHT 25
#define QUIT 113
#define DELAY 500

typedef struct	sShip {
	float		x;
	float		y;
}				t_ship;

void	init(void);
void	loopGame(void);

#endif
