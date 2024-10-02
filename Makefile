# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klimayll <klimayll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 19:15:11 by klimayll          #+#    #+#              #
#    Updated: 2024/10/01 18:50:00 by klimayll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_striteri.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c
BONUSSRC = ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJS = $(SRCS:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

INCLUDE = -I .

all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
bonus: $(OBJS) $(BONUSOBJ)
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJ)
%.o: %.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@
clean:
	rm -f $(OBJS) $(BONUSOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re