
NAME	= libftprintf.a
SRC_DIR = src/
INCLUDE	= ft_printf.h
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I
AR		= ar rcs
RM		= rm -f

SRCS =  ft_printf ft_formats ft_printchar ft_printhex ft_printptr \
		ft_printstr ft_printunsigned ft_printnbr


SRC = $(addsuffix .c, $(SRCS))
OBJ = $(addsuffix .o, $(SRCS))

all:	${NAME}

${NAME}: ${OBJ}
		@${AR} ${NAME} ${OBJ}

%.o: %.c
		@${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
		@$(RM) -rf $(OBJ)

fclean:	clean
		@$(RM) -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re