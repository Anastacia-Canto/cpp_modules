# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 15:00:54 by ansilva-          #+#    #+#              #
#    Updated: 2023/04/24 12:01:47 by anastacia        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

SRC = ./src/main ./src/ClapTrap ./src/ScavTrap

INC = -I ./inc

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CC) $(CFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re