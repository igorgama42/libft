# Name of the project
NAME = libft.a

# Function files
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c \
      ft_strchr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c \
      ft_strlcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strrchr.c\
      ft_strdup.c \
# Function Objects
SRCS_OBJ = $(SRC:.c=.o)

# Compiler
CC = gcc

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

.PHONY: all clean fclean re
