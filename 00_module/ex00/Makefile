# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 15:16:36 by anastacia         #+#    #+#              #
#    Updated: 2022/12/09 15:24:09 by anastacia        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

NAME = megaphone

SRC = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CC) $(CFLAGS) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re