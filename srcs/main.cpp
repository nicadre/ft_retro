// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:17:37 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 16:29:38 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "general.hpp"

Player *		player = new Player();
t_entity *		entities;

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
		addEntity(&entities, missil);
	}
//	if (missil->getX() > WIDTH)
//		return(0);
//	if (missil->getX() != -1.0f)
//		missil->setX(missil->getX() + 0.1f);
	input = 0;
	return (0);
}

void	printScreen() {
	t_entity *		currentEntity;

	currentEntity = entities;
	clear();
	printMap();
	mvaddch(player->getY(), player->getX(), player->getForm());
	while ()
	mvaddch(missil->getY(), missil->getX(), missil->getForm());
//		mvaddch(missil.y, missil.x, '-');
	refresh();
}

void	loopGame() {

	while (42) {
		if (verifUser() == 1)
		  break ;
		if (inputPlayer() == 1)
		  break ;
		printScreen();
		usleep(DELAY);
	}
}

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

t_entity *		newEntity(AEntity * entityNext) {
	t_entity *		entityElement = new t_entity();

	entityElement->entity = entityNext;
	entityElement->next = NULL;
	return(entityElement);
}

void			addEntity(t_entity ** list, AEntity * entity) {
	t_entity *	entityCurrent;

	if (!*list)
	{
		*list = newEntity(entity);
		return ;
	}
	entityCurrent = *list;
	while (entityCurrent->next != NULL)
		entityCurrent = entityCurrent->next;
	entityCurrent->next = newEntity(entity);
}

int		main() {
	init();
	loopGame();
	endwin();
	return (0);
}
