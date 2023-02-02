# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alhervas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 17:46:33 by alhervas          #+#    #+#              #
#    Updated: 2023/01/28 17:46:38 by alhervas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strlcat.c ft_strrchr.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

${NAME}: ${OBJS}
	@ar r ${NAME} ${OBJS}

all: ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re