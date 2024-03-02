SRC = contact.cpp main.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -rf
FLAG = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	fclean $(NAME)

.PHONY: all clean fclean re