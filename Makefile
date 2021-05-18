##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makef
##

SRC	=	src/hex_decimal_capitalize.c	\
		src/b_flags.c	\
		src/o_flags.c	\
		src/u_flags.c	\
		src/bigx_flags.c	\
		src/x_flags.c	\
		src/s_flags.c	\
		src/i_flags.c	\
		src/d_flags.c	\
		src/c_flags.c	\
		src/my_printf.c	\
		src/put_unsigned_nbr.c	\
		src/put_binary_nbr.c	\
		src/my_putstr.c			\
		src/my_putchar.c		\
		src/my_put_octal.c		\
		src/my_put_nbr.c		\
		src/hex_decimal.c		\
		src/my_put_pointer.c	\
		src/modulo_flags.c

SRC_UT	=	tests/tests_my_printf.c		\
			hex_decimal_capitalize.c	\
			b_flags.c	\
			o_flags.c	\
			u_flags.c	\
			bigx_flags.c	\
			x_flags.c	\
			s_flags.c	\
			i_flags.c	\
			d_flags.c	\
			c_flags.c	\
			my_printf.c	\
			put_unsigned_nbr.c	\
			put_binary_nbr.c	\
			my_putstr.c			\
			my_putchar.c		\
			my_put_octal.c		\
			my_put_nbr.c		\
			hex_decimal.c		\
			my_put_pointer.c	\
			modulo_flags.c

OBJ	=	$(SRC:.c=.o)

OBJ_UT	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./includes

LDFLAGS	=	-L./ -lmy

NAME	=	libmy.a

NAME_UT	=	units_tests

all:	$(NAME)

$(NAME):	 $(OBJ)
			ar rc $(NAME) $(OBJ)

tests_run: $(OBJ) $(OBJ_UT)
			make re -C .
			gcc -o $(NAME_UT) $(SRC_UT) $(CPPFLAGS) $(LDFLAGS) -lcriterion --coverage
			./$(NAME_UT)
clean:
			rm -f $(NAME_UT)
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)

re:	clean fclean all