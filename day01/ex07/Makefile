NAME = replace

SRC = main.cpp

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror --std=c++98 -g -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
