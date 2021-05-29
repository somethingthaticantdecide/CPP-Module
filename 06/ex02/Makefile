NAME = identify

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp

GCC 	= clang++
RM 		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.%c.o:
	$(GCC) $(CFLAGS) $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) $(CFLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 