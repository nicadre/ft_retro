// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:17:37 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 01:45:18 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

#define MS_PER_FRAME 16

t_ship	ship;
/*char	map[25][25] =
{
	"#########################",
	"#########################",
	};*/

int		verifUser() {
	int		cHeight;
	int		cWidth;
	int		input;

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

/*	for (int y = 0; y <= HEIGHT; y++) {
		for (int x = 0; x <= WIDTH; x++) {
			if ((y == 0 || y == HEIGHT) && (x == 0 && x == WIDTH))
				mvprintw(y, x, "#");
			else
			  mvprintw(y, x, "#");
		}
	}*/
	for (int x = 0; x < WIDTH; x++)
		mvprintw(0, x, "#");
	for (int x = 0; x < WIDTH; x++)
		mvprintw(HEIGHT, x, "#");
}

void	inputPlayer() {
	int		input;

	input = getch();
	if (input == KEY_UP && ship.y > 1)
		ship.y -= 1.0f;
	if (input == KEY_DOWN && ship.y < HEIGHT - 1)
		ship.y += 1.0f;
	if (input != KEY_DOWN)
		std::cout << input;
}

void	loopGame() {
	time_t  timev;
	ship.x = 3.0f;
	ship.y = 10.0f;
	while (42) {
		//double start = time(&timev);
		/*if (verifUser() == 1)
		  break ;*/
		inputPlayer();
		clear();
		printMap();
		mvaddch(ship.y, ship.x, '>');
		refresh();
		usleep(DELAY);
//		sleep(start + (MS_PER_FRAME - time(&timev));
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
//	std::cout << map;
//	mvprintw(0, 0, "#");
	loopGame();
	endwin();
	return (0);
}
