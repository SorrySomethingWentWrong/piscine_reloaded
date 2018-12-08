# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tramet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/04 03:30:39 by tramet            #+#    #+#              #
#    Updated: 2018/12/04 03:30:43 by tramet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC=ft_display_file.c 

OBJ=$(SRC:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
