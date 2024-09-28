# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 19:15:11 by klimayll          #+#    #+#              #
#    Updated: 2024/09/28 20:43:25 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_striteri ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strmapi
BONUSSRC = ft_lstmap_bonus ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus ft_lstdelone_bonus ft_lstclear_bonus ft_lstiter_bonus

OBJS = $(SRCS:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)
$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
bonus: $(OBJS) $(BONUSOBJ)
	ar -rc $(NAME) $(OBJS) $(BONUSOBJ)
%.c%.o: $(INCLUDE)
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re