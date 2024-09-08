NAME = rush-02

CFILES = srcs/dict.c \
			srcs/label.c \
			srcs/lib.c \
			srcs/main.c \
			srcs/print_number.c \
			srcs/string.c \

OFILES = $(CFILES:.c=.o)

CFLAGS += -g -fsanitize=address -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	cc $(CFLAGS) -o $(NAME) $^	

%.o: %.c
	cc $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
