# Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. #

NAME = megaphone
INCLUDES = ./includes/
SOURCE = megaphone.cpp echo.cpp
OBJECTS_DIR = ./objects/
OBJECTS = $(SOURCE:%.cpp=$(OBJECTS_DIR)%.o)
TESTS_DIR = ./tests/
TESTS_BUILD_DIR = ./tests/build/
CC = clang++
VPATH = ./src/
FLAGS = -Wall -Wextra -Werror -std=c++98
MAKEFLAGS = --no-print-directory

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $@

$(OBJECTS_DIR)%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -I$(INCLUDES) -o $@

$(OBJECTS_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJECTS_DIR)
	@rm -rf $(TESTS_BUILD_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

test: $(TESTS_BUILD_DIR)
	@cmake --build $(TESTS_BUILD_DIR)
	@ctest --test-dir $(TESTS_BUILD_DIR)

$(TESTS_BUILD_DIR):
	@cmake -S $(TESTS_DIR) -B $(TESTS_BUILD_DIR)
