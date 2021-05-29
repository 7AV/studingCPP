NAME = phonebook

HEADER = Contact.hpp

SRC = main.cpp \
		Contact.cpp

OBJ = $(SRC:.cpp=.o)
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -I $(HEADER) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all