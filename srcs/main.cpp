// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:17:37 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 22:45:39 by llapillo         ###   ########.fr       //
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
	while (cWidth < WIDTH + 1 || cHeight < HEIGHT + 1)
	{
		input = getch();
		if (input == QUIT)
			return(1);
		getmaxyx(stdscr, cHeight, cWidth);
		clear();
		mvprintw(cHeight / 2, (cWidth - 38) / 2, "Not sufficient space for playing game.");
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
	t_entity *		curEntity;
	int				input;
	static int		nbrF = 0;

	input = getch();
	if (input == QUIT)
		return(1);
	if (input == KEY_UP && player->getY() > 1)
		player->move(player->getX(), (player->getY() - 1));
	if (input == KEY_DOWN && player->getY() < HEIGHT - 1)
		player->move(player->getX(), (player->getY() + 1));
	if (input == KEY_RIGHT && player->getX() < WIDTH - 1)
		player->move((player->getX() + 1), player->getY());
	if (input == KEY_LEFT && player->getX() > 1)
		player->move((player->getX() - 1), player->getY());
	if (input == PAUSE)
	{
		mvprintw(HEIGHT / 2, (WIDTH - 5) / 2, "Pause");
		refresh();
		while ((input = getch()) != PAUSE)
		{
		}
	}
	if (input == SPC)
	{
		Missil *	missil = new Missil(player->getX() + 1, player->getY());
		addEntity(&entities, missil);
	}
	if (nbrF == ENNEMY)
	{
		nbrF = 0;
		Ennemy *		ennemy = new Ennemy(149, (rand() % (HEIGHT - 1) + 1));
		addEntity(&entities, ennemy);
	}
	nbrF++;
	curEntity = entities;
	while (curEntity != NULL)
	{
		curEntity->entity->move();
		curEntity = curEntity->next;
	}

	return (0);
}

void	printScreen() {
	t_entity *		curEntity;

	curEntity = entities;
	clear();
	printMap();
	mvaddch(player->getY(), player->getX(), player->getForm());
	while (curEntity != NULL)
	{
		if (curEntity->entity->getX() < 0 || curEntity->entity->getX() >= WIDTH)
			deleteEntity(curEntity);
		mvaddch(curEntity->entity->getY(), curEntity->entity->getX(), curEntity->entity->getForm());
		curEntity = curEntity->next;
	}
	mvprintw(0, 0, "Score : %d ", Ennemy::score);
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

void			deleteEntity(t_entity * entity) {
	t_entity *	current;
	t_entity *	prev;

	current = entities;
	prev = NULL;
	while (current != entity && current != NULL)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return ;
	delete current->entity;
	if (prev == NULL)
	{
		entities = current->next;
		delete current;
	}
	else
	{
		prev->next = current->next;
		delete current;
	}
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

void	init() {
	initscr();
	raw();
	noecho();
	curs_set(0);
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	return ;
}

int		main() {
	srand(time(NULL));
	init();
	loopGame();
	endwin();
	return (0);
}
