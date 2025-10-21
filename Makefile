# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 21:32:54 by jose-an2          #+#    #+#              #
#    Updated: 2025/10/21 20:42:44 by jose-an2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
SRC_FILES   = ft_itoa.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putnbr_pf.c \
			  ft_printf.c \
			  ft_puthex_pf.c \
			  ft_putptr_pf.c \
			  ft_putunbr_pf.c \
			  ft_utoa.c \


OBJS         = $(SRC_FILES:.c=.o)
INC         = ft_printf.h

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

