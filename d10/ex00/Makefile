# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 10:48:15 by jbrown            #+#    #+#              #
#    Updated: 2017/08/22 20:09:24 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECT = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

OPTIONS = -c -I ./includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) $(SRC)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
