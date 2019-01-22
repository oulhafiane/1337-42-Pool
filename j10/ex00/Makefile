# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 15:21:40 by zoulhafi          #+#    #+#              #
#    Updated: 2018/09/13 02:28:46 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/

NAME = "libft.a"

DEPS = includes/

all: ft_swap ft_strcmp ft_strlen ft_putchar ft_putstr index_lib

index_lib: createlib
	ranlib $(NAME)

createlib:
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

ft_putchar: $(SRCS)ft_putchar.c $(DEPS)ft.h
	gcc -c $(SRCS)ft_putchar.c

ft_putstr: $(SRCS)ft_putstr.c $(DEPS)ft.h
	gcc -c $(SRCS)ft_putstr.c

ft_strlen: $(SRCS)ft_strlen.c $(DEPS)ft.h
	gcc -c $(SRCS)ft_strlen.c

ft_strcmp: $(SRCS)ft_strcmp.c $(DEPS)ft.h
	gcc -c $(SRCS)ft_strcmp.c

ft_swap: $(SRCS)ft_swap.c $(DEPS)ft.h
	gcc -c $(SRCS)ft_swap.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
