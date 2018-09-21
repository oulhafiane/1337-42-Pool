# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 04:59:40 by zoulhafi          #+#    #+#              #
#    Updated: 2018/09/13 09:25:19 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = 

NAME_OBJ = 

DEPS1 = ft_calc.h

DEPS2 = ft_tools.h

FLAGS = -Wall -Wextra -Werror

_OBJ = ft_calc.o do_op.o ft_tools.o

OBJ = $(patsubst %, $(NAME_OBJ)%, $(_OBJ))

CC = gcc $(FLAGS)

all: $(_OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: $(SRCS)%.c $(DEPS1) $(DEPS2)
	$(CC) -o $(NAME_OBJ)$@ -c $<

clean:
	rm -f $(OBJ)
