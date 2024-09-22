# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 19:15:11 by klimayll          #+#    #+#              #
#    Updated: 2024/09/22 22:07:40 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = 
CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

NAME = libft.a
SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)
INCLUDE = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
all: $(NAME)
$(NAME): $(OBJS)
        ar -rc $(NAME) $(OBJS)
.c.o: $(INCLUDE)
        ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
clean:
