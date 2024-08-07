NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

HEAD	= includes/

GCC		= gcc

RM		= rm -f

FLAGS	= -Wall -Werror -Wextra

LIB		= ranlib

all:		${NAME}

.c.o:
			${GCC} ${FLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re