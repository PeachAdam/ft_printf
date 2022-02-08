CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS	= ft_printf.c utils_p_flag.c utils_put.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS} 

all : ${NAME}

debug:
	$(CC) -g -o ft_printf $(SRCS) 

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
