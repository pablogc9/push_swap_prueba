# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 18:27:14 by pgalvez-          #+#    #+#              #
#    Updated: 2022/11/25 12:54:53 by pgalvez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Werror -Wall -Wextra
RM			= rm -f
SRCS		= ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_printf.c \
				ft_print_u_int.c \
				ft_print_hex.c \
				ft_utils.c \
				ft_print_addr.c \
				get_next_line_utils.c \
				get_next_line.c
				
BONUS_SRC	= ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c 
OBJS		= ${SRCS:.c=.o}
BONUS_OBJ	= ${BONUS_SRC:.c=.o}
AR		= ar rc
LIB		= ranlib

all		:	${NAME}

.c.o	:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
		@${AR} ${NAME} ${OBJS}
		@${LIB} ${NAME}

bonus	:	${OBJS} ${BONUS_OBJ}
		${AR} ${NAME} ${OBJS} ${BONUS_OBJ}
		${LIB} ${NAME}

clean	:
		@${RM} ${OBJS} ${BONUS_OBJ}
	
fclean	:	clean
		@${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re