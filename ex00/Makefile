NAME = rush-02

CFILES = *.c

OFILES = $(CFILES:.c=.o)

CFLAGS += -g -fsanitize=address -Wall -Wextra -Werror

LDFLAGS = $(CFLAGS)

all: $(NAME) clear

$(NAME): $(OFILES)
	cc $(CFLAGS) -o $(NAME) $(OFILES)

$(OFILES):
	cc $(CFLAGS) -c $(CFILES)	

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
