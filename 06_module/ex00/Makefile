
NAME = converter

SRC = ./src/main ./src/ScalarConverter

INC = -I ./inc

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(SRC:=.o)
	$(CXX) $(CXXFLAGS) $(INC) $(SRC:=.o) -o $(NAME)

clean:
	$(RM) $(NAME) $(SRC:=.o)

re: clean all

.PHONY: all clean re