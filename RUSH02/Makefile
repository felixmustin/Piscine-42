SRCS 		= main.c dict.c nbr_tab.c utils.c search_dict.c sort_dict.c init_dict.c

OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

RM			= rm -f

GCCFLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			 ${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
