
NAME = identity

SRC = ./src/main ./src/Base

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

run: all
	./${NAME}

.PHONY: all clean re run