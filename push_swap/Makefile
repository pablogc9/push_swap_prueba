# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 17:05:00 by pgalvez-          #+#    #+#              #
#    Updated: 2022/11/19 17:54:34 by pgalvez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= gcc

CFLAGS		= -Werror -Wall -Wextra

LIBFT		= libft/libft.a

RM			= rm -f

SRCS		= get_stacks.c \
				operations_r.c \
				check_errors.c \
				operations_rr.c \
				operations_s.c \
				operations_p.c \
				print_stacks.c \
				sorted_list.c \
				algorithm.c \
				algorithm_utils.c \
				moves.c \
				main.c

OBJS		= $(SRCS:.c=.o)

all		: $(LIBFT) $(NAME)

.c.o	:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)	: $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		
$(LIBFT):
		make -C ./libft
		
clean	:
		make -C ./libft clean
		$(RM) $(OBJS)
	
fclean	:	clean
		$(RM) $(LIBFT)
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re