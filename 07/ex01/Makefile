NAME = iter

SRC = main.cpp

GCC 	= clang++
RM 		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.%c.o:
	$(GCC) $(CFLAGS) $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(SRC) iter.hpp
	$(GCC) $(CFLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 