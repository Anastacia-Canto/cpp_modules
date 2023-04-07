# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 17:28:59 by anastacia         #+#    #+#              #
#    Updated: 2023/04/07 16:47:10 by anastacia        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = ./src/tests ./src/Account

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