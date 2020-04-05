NAME = libft.a

HEAD = libft.h

SRCS = ./srcs/ft*.c
OBJS = *.o

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Library created!"

.PHONY: all, clean, fclean, re

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "Objects removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Library removed"

re: fclean all
