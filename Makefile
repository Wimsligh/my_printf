##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = my_printf.c \
	  my_put_float.c \
	  my_put_hexa_float.c \
	  my_put_hexa_maj.c \
	  get_precision.c \
	  my_digit.c \
	  my_put_hexa_min.c \
	  my_put_nbr.c \
	  my_put_nbr_count.c \
	  my_put_octet.c \
	  my_put_pointer.c \
	  my_put_scientific_maj.c \
	  my_put_scientific_min.c \
	  my_put_short_maj.c \
	  my_put_short_min.c \
	  my_put_unsigned.c \
	  my_putchar.c \
	  my_putstr.c \
	  my_strlen.c \
	  cond1.c \
	  cond2.c \
	  cond3.c \
	  cond4.c \
	  cond5.c \
	  my_put_bin.c \
	  my_put_pointer.c \
	  my_put_str_s.c \
	  my_put_unsigned.c \
	  tableau.c	\

TEST_SRC = tests/test_printf.c

OBJ = $(SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)


clean :
			rm -f *.o

fclean :
	        rm -f *.o
	        rm -f *.a
	        rm -f ../*.a

re : fclean all

unit_tests : fclean $(OBJ) $(TEST_OBJ)
	gcc -o $(TEST_NAME) $(OBJ) $(TEST_OBJ) -lcriterion
