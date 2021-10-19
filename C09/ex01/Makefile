# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmustin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 14:57:07 by fmustin           #+#    #+#              #
#    Updated: 2021/08/18 15:31:35 by fmustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}
				
all:		${NAME}

clean:
					rm -f ${OBJS}

fclean:		clean
					rm -f ${NAME}

re:			fclean all

.c.o:
		${CC} ${CFLAGS} -c -I ./includes $< -o ${<:.c=.o}

.PHONY:		all clean fclean re
