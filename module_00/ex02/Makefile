# Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. #

NAME = account
INCLUDES = ./src/
SOURCE = Account.cpp tests.cpp
OBJECTS_DIR = ./objects/
OBJECTS = $(SOURCE:%.cpp=$(OBJECTS_DIR)%.o)
CC = clang++
VPATH = ./src/
FLAGS = -g -Wall -Wextra -Werror -std=c++98
MAKEFLAGS = --no-print-directory

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@$(CC) $(OBJECTS) $(FLAGS) -o $@

$(OBJECTS_DIR)%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -I$(INCLUDES) -o $@

$(OBJECTS_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJECTS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
