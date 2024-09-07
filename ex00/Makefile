NAME = rush-02

CFILES = open_dict.c

OFILES = $(CFILES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

all: $(NAME) clean

$(NAME):
	cc $(CFLAGS) $(CFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean:
	clean rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
