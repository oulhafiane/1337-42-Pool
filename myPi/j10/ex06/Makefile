# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 04:59:40 by zoulhafi          #+#    #+#              #
#    Updated: 2018/09/13 05:38:13 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/

NAME_OBJ = objs/

DEPS1 = includes/ft_calc.h

DEPS2 = includes/ft_tools.h

FLAGS = -Wall -Wextra -Werror

_OBJ = ft_tools.o ft_calc.o do_op.o

OBJ = $(patsubst %, $(NAME_OBJ)%, $(_OBJ))

CC = gcc $(FLAGS)

all: $(_OBJ)
	@$(CC) -o $(NAME) $(OBJ)

%.o: $(SRCS)%.c $(DEPS1) $(DEPS2)
	@$(CC) -o $(NAME_OBJ)$@ -c $<

clean:
	@rm -f $(OBJ)
