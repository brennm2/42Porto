NAME = libftprintf.a

AR = ar crs

CC = cc
CCFLAGS = -Wall -Werror -Wextra

RM = rm -rf

SRC = ft_is_c.c \
	ft_is_d.c \
	ft_is_s.c \
	ft_is_u.c \
	ft_is_x.c \
	ft_is_xup.c \
	ft_is_ptr.c \
	ft_printf.c

OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
