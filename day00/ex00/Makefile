NAME = megaphone

HEADER =

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
