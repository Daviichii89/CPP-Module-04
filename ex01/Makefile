#Config
CC = c++
NAME = DeepCopy
CFLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address

# Directory
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CFLAGS) $(DFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re