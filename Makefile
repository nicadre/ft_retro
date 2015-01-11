#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/10 14:11:36 by niccheva          #+#    #+#              #
#    Updated: 2015/01/11 10:38:28 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			=	ft_retro

CC				=	g++ $(FLAGS)

FLAGS			=	-Wall -Wextra -Werror

DSRC			=	./srcs/

DOBJ			=	./objs/

DINC			=	./includes/

SRC				=	AEntity.class.cpp					\
					Mobil.class.cpp						\
					AShip.class.cpp						\
					main.cpp

OBJ				=	$(patsubst %.cpp, $(DOBJ)%.o, $(SRC))

RMF				=	/bin/rm -f
RMD				=	/bin/rm -Rf
MKD				=	/bin/mkdir -p

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creation de l'executable :\033[0;32m"
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "\033[0;m\c"

$(DOBJ)%.o: $(DSRC)%.cpp
	@$(MKD) $(DOBJ)
	@echo "Compilation de l'objet :\033[0;32m"
	$(CC) -o $@ -c $< -I$(DINC)
	@echo "\033[0;m\c"

clean:
	@echo "Suppression de l'objet :\033[0;31m"
	$(RMF) $(OBJ)
	@echo "\033[0;m\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "Suppression de l'executable :\033[0;31m"
	$(RMF) $(NAME)
	@echo "\033[0;m\c"

re: fclean all

.PHONY: all clean fclean re
