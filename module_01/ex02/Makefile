# Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. #

NAME = program
SOURCE = main.cpp
OBJECTS = $(SOURCE:%.cpp=%.o)
CC = clang++
FLAGS = -g -Wextra -Werror -Wall -std=c++98
MAKEFLAGS = --no-print-directory

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
