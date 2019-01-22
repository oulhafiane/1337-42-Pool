# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 02:04:47 by zoulhafi          #+#    #+#              #
#    Updated: 2018/09/21 03:27:38 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

LIB = ft

SRCS = srcs/

NAME_OBJ =

INCLUDES = includes/

_DEPS = ft.h

DEPS = $(patsubst %, $(INCLUDES)%, $(_DEPS))

FLAGS = -Wall -Wextra -Werror

_OBJ = ft_display_file.o ft_atoi.o ft_tail.o ft_putchar.o ft_putstr.o ft_strlen.o

OBJ = $(patsubst %, $(NAME_OBJ)%, $(_OBJ))

CC = gcc $(FLAGS)

all: $(_OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: $(SRCS)%.c $(DEPS)
	$(CC) -o $(NAME_OBJ)$@ -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
