# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:32:54 by jose-an2          #+#    #+#              #
#    Updated: 2025/10/15 21:36:33 by jose-an2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
SRC_FILES   = ft_strlen.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putnbr_fd.c \
			  ft_printf.c \

OBJS         = $(SRC_FILES:.c=.o)
INC         = libftprintf.h

all: $(NAME)

%.o: %.c Makefile $(INC)
		$(CC) $(FLAGS) -I. -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

