# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschapin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 11:08:21 by jschapin          #+#    #+#              #
#    Updated: 2022/01/03 16:50:38 by jschapin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES		= ft_printf.c \
		  	converters/convert_c.c \
			converters/convert_s.c \
			converters/convert_id.c \
			converters/convert_u.c \
			converters/convert_x.c \
			converters/convert_big_x.c \
			converters/convert_p.c \
			converters/convert_percent.c \
			tools/write_add_one.c \
			tools/write_add_str.c \
			tools/num_len.c \
			tools/unum_len.c \
			tools/ft_putnbr_base.c \
			tools/num_len_hex.c \
			tools/ft_putunbr_base.c \
			tools/ft_putchar_fd.c \

INCLUDES 	= ft_printf.h \

OBJETS		= ${SOURCES:.c=.o}

NAME		= libftprintf.a

AR			= ar rcs

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
						${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJETS}
						${AR} ${NAME} ${OBJETS} 

clean :
						rm -f ${OBJETS}
fclean:	clean
						rm -f ${NAME}
re:	fclean all

.PHONY:		all clean fclean re
