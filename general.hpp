// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   general.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:18:13 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 02:55:14 by llapillo         ###   ########.fr       //
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
#define SPC 32
#define DELAY 500

typedef struct	s_ship {
	float		x;
	float		y;
}				t_ship;

typedef struct	s_missil {
	float		x;
	float		y;
}				t_missil;

void	init(void);
void	loopGame(void);

#endif
