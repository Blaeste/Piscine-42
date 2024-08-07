DIRSRC		= srcs/

SRCS		= ${DIRSRC}ft_cat.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_cat

GCC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${GCC} -o ${NAME} ${OBJS} ${CFLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
