# Name of the project
NAME = libft.a

# Directory of the functions
SRCS_DIR = ./

# Function files
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c \
	  ft_strchr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c \
	  ft_strlcpy.c 

# Putting the path to the functions
SRCS = $(addprefix $(SRCS_DIR), $(SRC))

# Function Objects
SRCS_OBJ = $(SRCS:.c=.o)

# Compiler
CC = gcc

# Compiler Flags
C_FLAGS = -Wall -Werror -Wextra -std=c99

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJ)
	ar -r $@ $^

$(SRCS_OBJ): ${SRCS}
	${CC} $(C_FLAGS) -c -o $@ $<

clean:
	rm -f $(SRCS_OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.phony: all clean fclean re
