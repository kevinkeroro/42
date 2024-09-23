# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 19:15:11 by klimayll          #+#    #+#              #
#    Updated: 2024/09/23 18:19:10 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
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
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re