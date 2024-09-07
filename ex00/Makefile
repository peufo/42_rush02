NAME = rush-02

CFILES = *.c

OFILES = $(CFILES:.c=.o)

CFLAGS += -fsanitize=address -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

all: fclean $(NAME)

$(NAME):
	cc $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean:
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
