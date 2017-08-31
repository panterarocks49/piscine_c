# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 10:48:15 by jbrown            #+#    #+#              #
#    Updated: 2017/08/24 22:50:21 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_last
SRC_DIR = ./srcs/
RM = /bin/rm -f

FUNCTS =
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
	@./ft_last

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
