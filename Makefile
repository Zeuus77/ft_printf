CC = cc
LIBC = ar -rcs
INC = libftprintf.h 
FLAGS = -Wall -Wextra -Werror
SRCS =  ft_printhexa.c ft_putchar.c ft_printnumb.c ft_printnumb_un.c ft_printstr.c ft_printadress.c ft_printf.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

$(NAME) : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: $(NAME)

%.o:%.c
	${CC} ${FLAGS} -c $< -I $(INC)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
