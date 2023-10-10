NAME = libft.a

AR = ar
ARFLAGS = rcs

CC = cc
CCFLAGS = -Wall -Werror -Wextra

RM = rm
RMFLAGS= -f

OBJ = ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_memset.o \
	ft_strchr.o \
	ft_strlcat.o \
	ft_strlcpy.o \
	ft_strlen.o \
	ft_strncmp.o \
	ft_strrchr.o \
	ft_tolower.o \
	ft_toupper.o \
	ft_bzero.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_strnstr.o \
	ft_atoi.o	\
	ft_strdup.o \
	ft_calloc.o

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all