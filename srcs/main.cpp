// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:17:37 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 14:43:42 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

//t_ship	ship;
//t_missil	missil;

Player *		player = new Player();

int		verifUser() {
	int		cHeight;
	int		cWidth;
	int		input;

	getmaxyx(stdscr, cHeight, cWidth);
	while (cWidth < WIDTH || cHeight < HEIGHT)
	{
		input = getch();
		if (input == QUIT)
			return(1);
		getmaxyx(stdscr, cHeight, cWidth);
		clear();
		mvprintw(cHeight / 2, (cWidth - 38) / 2, "Not sufficient space for playing game.");
		usleep(DELAY);
	}
	return(0);
}

void	printMap() {
	for (int x = 0; x < WIDTH; x++)
		mvprintw(0, x, "#");
	for (int x = 0; x < WIDTH; x++)
		mvprintw(HEIGHT, x, "#");
}

int		inputPlayer() {
	int		input;

	input = getch();
	if (input == QUIT)
		return(1);
	if (input == KEY_UP && player->getY() > 1)
		player->move(2.0f, (player->getY() - 1));
	if (input == KEY_DOWN && player->getY() < HEIGHT - 1)
		player->move(2.0f, (player->getY() + 1));
	if (input == SPC)
	{
		Missil *	missil = new Missil(player->getX() + 1, player->getY());
	}
	if (missil->x > WIDTH)
		delete missil;
	if (missil->x != -1.0f)
		missil->setX(missil->getX() + 0.1f);
	input = 0;
	return (0);
}

void	printScreen() {
		clear();
		printMap();
		mvaddch(player->getY(), player->getX(), player->getForm());
		mvaddch(missil->getY(), missil->getX(), missil->getForm());
		mvaddch(missil.y, missil.x, '-');
		refresh();
}

void	loopGame() {
//	ship.x = 1.0f;
//	ship.y = 10.0f;
//	missil.x = -1.0f;
//	missil.y = -1.0f;

	while (42) {
		if (verifUser() == 1)
		  break ;
		if (inputPlayer() == 1)
		  break ;
		//inputPlayer();
		printScreen();
		usleep(DELAY);
	}
}

/*void	initMap() {
	for (int y = 0; y <= HEIGHT; y++) {
		for (int x = 0; x <= WIDTH; x++) {
//			if ((y == 0 || y == HEIGHT) && (x == 0 && x == WIDTH))
//				mvprintw(y, x, "#");
			map[y][x] = '#';
		}
	}
	}*/

void	init() {
	initscr();
//	raw();
	cbreak();
	noecho();
	curs_set(0);
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	return ;
}

int		main() {
	init();
//	initMap();
	loopGame();
	endwin();
	return (0);
}
