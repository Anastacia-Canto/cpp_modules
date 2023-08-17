
NAME = bureaucrat

SRC = ./src/main ./src/Bureaucrat ./src/Form

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