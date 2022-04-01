# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 16:33:26 by iamongeo          #+#    #+#              #
#    Updated: 2022/03/31 22:10:45 by iamongeo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c ft_putfct_count.c ft_putnbr_base_pad.c ft_puthex.c
OBJS		= ${SRCS:.c=.o}

LIBFT_PATH	= libft/
LIBFT_OBJS	= ${LIBFT_PATH}*.o 

MAKE		= make

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

AR			= ar rcs

RM			= rm -f

NAME		= libftprintf.a

.c.o:
#	${CC} ${CFLAGS} -L${LIBFT_PATH} -lft -c $< -o ${<:.c=.o}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	cc_libft ${OBJS}
	${AR} ${NAME} ${OBJS} ${LIBFT_OBJS}

all:	${NAME}

cc_libft:
	${MAKE} -C ${LIBFT_PATH}

clean:
	${MAKE} -C ${LIBFT_PATH} clean
	${RM} ${OBJS}

fclean:	clean
	${MAKE} -C ${LIBFT_PATH} fclean
	${RM} ${NAME}

re:		fclean all

