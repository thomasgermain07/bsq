NAME = bsq
CC = gcc
FLAG = -Wall -Wextra -Werror
SRCS = sources/create_map.c sources/set_param.c sources/main.c sources/open_file.c sources/find_square.c sources/check_map.c sources/exec.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)

c.o :
	gcc -c $(FLAGS) $< -o $(<:.c=.o)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f bsq

re : fclean all
