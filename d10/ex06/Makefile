# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 10:48:15 by jbrown            #+#    #+#              #
#    Updated: 2017/08/22 23:09:04 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC_DIR = ./srcs/
RM = /bin/rm -f

FUNCTS = print ft_atoi
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJECTS):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) main.c -o $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
