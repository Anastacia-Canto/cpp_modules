
NAME = RPN

SRC = ./main ./RPN

INC = -I ./

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CC) $(CFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

fclean: clean

re: clean all

.PHONY: all fclean clean re