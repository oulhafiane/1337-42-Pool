# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 04:59:40 by zoulhafi          #+#    #+#              #
#    Updated: 2018/09/13 08:16:07 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRCS = 

NAME_OBJ = 

DEPS = ft_calc.h ft_tools.h ft_opp.h

FLAGS = -Wall -Wextra -Werror

_OBJ = ft_tools.o ft_calc.o advanced_do_op.o

OBJ = $(patsubst %, $(NAME_OBJ)%, $(_OBJ))

CC = gcc $(FLAGS)

all: $(_OBJ)
	@$(CC) -o $(NAME) $(OBJ)

%.o: $(SRCS)%.c $(DEPS)
	@$(CC) -o $(NAME_OBJ)$@ -c $<

clean:
	@rm -f $(OBJ)
