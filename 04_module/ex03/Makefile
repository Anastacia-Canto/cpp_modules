
NAME = materia

SRC = ./src/main ./src/AMateria ./src/Ice ./src/Cure ./src/Character ./src/MateriaSource

INC = -I ./inc

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CXX) $(CXXFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re