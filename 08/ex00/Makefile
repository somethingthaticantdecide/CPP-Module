NAME = easyfind

SRC = main.cpp

GCC 	= clang++
RM 		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

.%c.o:
	$(GCC) $(CFLAGS) $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(SRC) easyfind.hpp
	$(GCC) $(CFLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 