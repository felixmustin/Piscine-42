# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmustin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 17:10:41 by fmustin           #+#    #+#              #
#    Updated: 2021/08/24 18:30:11 by fmustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= bsq.c info.c map.c read_input.c show.c utils.c verif_input.c
INCL		= bsq.h
OBJS		= ${SRCS:.c=.o}
NAME		= bsq
CC			= gcc
CCFLAGS 	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
				$(CC) $(CCFLAGS) -o $(NAME) $(OBJS)

all: 		${NAME}

clean:
				rm -f ${OBJS}

fclean: 	clean
				rm -f ${NAME}

re:
				fclean all

.c.o:
				${CC} ${CFLAGS} -c -I ${INCL} $< -o ${<:.c=.o}

.PHONY:			all clean fclean re

