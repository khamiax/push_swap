CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SOURCES = src_second.c \
          src_third.c \
          src.c \
          core.c\
		  core_bis.c\
		  core_third.c

OBJETS = $(SOURCES:.c=.o)

LIBFT = libft/libft.a

LDFLAGS = -Llibft -lft

all: $(LIBFT) $(NAME)

$(NAME): $(OBJETS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJETS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

clean:
	$(RM) $(OBJETS)
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re
