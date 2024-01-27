# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberthod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 17:34:45 by bberthod          #+#    #+#              #
#    Updated: 2022/10/04 19:11:05 by bberthod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = src/do_op.c src/ft_add.c src/ft_sub.c src/ft_mult.c src/ft_div.c src/ft_mod.c src/ft_atoi.c src/ft_putnbr.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
