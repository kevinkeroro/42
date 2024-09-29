# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 21:18:27 by klimayll          #+#    #+#              #
#    Updated: 2024/09/29 21:27:00 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -c

SRCS = ft_printf ft_printf_utils

OBJS = $(SRCS:.c=.o)

INCLUDE = ft_printf.h


all: $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.c%.o: $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
