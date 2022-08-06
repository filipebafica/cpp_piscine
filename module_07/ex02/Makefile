# Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
NAME = program
INCLUDES = ./includes/
SOURCE = main.cpp
TEMPLATE = ./includes/Array.tpp
OBJECTS_DIR = ./objects/
OBJECTS = $(SOURCE:%.cpp=$(OBJECTS_DIR)%.o)
VPATH = ./src/
CC = c++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
MAKEFLAGS = --no-print-directory

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $@

$(OBJECTS_DIR)%.o: %.cpp $(TEMPLATE)
	@$(CC) -c $(FLAGS) $< -I$(INCLUDES) -o $@

$(OBJECTS_DIR):
	@mkdir -p $(OBJECTS_DIR)

clean:
	@rm -rf $(OBJECTS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
