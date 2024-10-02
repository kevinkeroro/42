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

CFLAGS = -Wall -Werror -Wextra -c

SRCS = ft_printf ft_printf_utils ft_print_char ft_print_string ft_print_number

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
