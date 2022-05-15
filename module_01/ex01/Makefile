# Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. #

NAME = zombie
INCLUDES = ./includes/
SOURCE = main.cpp zombieHorde.cpp Zombie.cpp
OBJECTS_DIR = ./objects/
OBJECTS = $(SOURCE:%.cpp=$(OBJECTS_DIR)%.o)
CC = clang++
VPATH = ./src/
FLAGS = -g -Wextra -Werror -Wall -std=c++98
MAKEFLAGS = --no-print-directory

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $@

$(OBJECTS_DIR)%.o: %.cpp
	@$(CC) -c $(FLAGS) $< -I$(INCLUDES) -o $@

$(OBJECTS_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJECTS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
