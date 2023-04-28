
NAME = animal

SRC = ./src/main ./src/Animal ./src/Dog ./src/Cat ./src/WrongCat ./src/WrongAnimal ./src/Brain

INC = -I ./inc

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CC) $(CFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re