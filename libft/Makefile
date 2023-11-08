# Name of the project
NAME = libft.a

# Function files
SRC =  ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c 
SRC += ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c 
SRC += ft_strchr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c 
SRC += ft_strlcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strrchr.c
SRC += ft_strdup.c ft_strnstr.c ft_substr.c ft_putchar_fd.c
SRC += ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC += ft_calloc.c ft_strlcat.c ft_strjoin.c ft_strtrim.c

# Function Objects
SRCS_OBJ = $(SRC:.c=.o)

# Compiler
CC = cc

# Compiler Flags
C_FLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJ)
	ar -r $@ $^

clean:
	rm -f $(SRCS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(C_FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(SRCS_OBJ)

.PHONY: all clean fclean re
