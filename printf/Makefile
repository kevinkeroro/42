# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 21:18:27 by klimayll          #+#    #+#              #
#    Updated: 2024/10/02 18:32:06 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_printf_utils.c ft_putchar.c ft_putstr.c ft_putnbr.c

OBJS = $(SRCS:.c=.o)

INCLUDE = ft_printf.h


all: $(NAME)
$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.c%.o: $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
