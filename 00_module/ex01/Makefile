# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 17:28:59 by anastacia         #+#    #+#              #
#    Updated: 2023/01/05 12:20:08 by anastacia        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

(VERBOSE).SILENT:

NAME = phonebook

SRC = ./src/main ./src/PhoneBook

INC = -I ./inc

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CC) $(CFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re