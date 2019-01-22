NAME = eval_expr

SRCS = srcs/

NAME_OBJ = objs/

INCLUDES = includes/

_DEPS = ft_all.h ft_free.h ft_calculate.h ft_convert.h ft_string.h ft_string_2.h

DEPS = $(patsubst %, $(INCLUDES)%, $(_DEPS))

FLAGS = -Wall -Wextra -Werror

_OBJ = eval_expr.o ft_free.o ft_calculate.o ft_convert.o ft_string.o ft_string_2.o

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
