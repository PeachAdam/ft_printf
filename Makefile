CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS	= ft_printf.c ft_itoa.c ft_print_ptr.c ft_printnbr.c ft_printstr.c \
		  ft_putchar.c ft_lastfunc.c

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
