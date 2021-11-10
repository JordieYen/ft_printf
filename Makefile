NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I.

ARFLAGS = rcs

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthexaaddress.c ft_puthexadown.c ft_puthexaup.c ft_printf.c updatec.c 

OBJ := $(SRC:c=o)

all: $(NAME)

$(NAME): $(NAME)($(OBJ))

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

##.PHONY: all clean fclean re
