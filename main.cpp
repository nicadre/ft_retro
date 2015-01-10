// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:17:37 by llapillo          #+#    #+#             //
//   Updated: 2015/01/10 17:52:46 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.h"

void	init() {
	int		height;
	int		width;

	initscr();
	raw();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	getmaxyx(stdscr, width, height);
/*	if ()
	{
		std::cout << "Not sufficient space for playing game." << std::endl;
		exit(1);
		}*/
	return ;
}

int		main() {
	init();
	endwin();
	return (0);
}
