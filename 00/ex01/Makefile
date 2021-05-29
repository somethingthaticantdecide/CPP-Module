NAME = phoneBook

SRC = phoneBook.cpp

GCC 	= clang++
RM 		= rm -f
CFLAGS	= -Wall -Wextra -Werror 

.%c.o:
	$(GCC) $(CFLAGS) $< -o ${<:.c=.o}

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) -o $(NAME) $(SRC)

clean:
	$(RM) *.o *.gch

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 