NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iheaders -I . -c

RM = rm -f

SRCS = srcs/ft_char_print.c \
	srcs/ft_hex_print.c \
	srcs/ft_num_length.c \
	srcs/ft_num_print.c \
	srcs/ft_printf.c \
	srcs/ft_specifiers.c \
	srcs/ft_str_print.c \

OBJ_DEST = mv *.o srcs

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	$(OBJ_DEST)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
