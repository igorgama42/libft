# Name of the project
NAME = libft.a

# Function files
SRCS =  ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c 
SRCS += ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c ft_strmapi.c
SRCS += ft_strchr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c 
SRCS += ft_strlcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strrchr.c
SRCS += ft_strdup.c ft_strnstr.c ft_substr.c ft_putchar_fd.c ft_split.c
SRCS += ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
SRCS += ft_calloc.c ft_strlcat.c ft_strjoin.c ft_strtrim.c ft_itoa.c

# Function Objects
SRCS_OBJS = $(SRCS:.c=.o)

# Compiler
CC = cc

# Compiler Flags
C_FLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	ar -r $@ $^

clean:
	rm -f $(SRCS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(C_FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(SRCS_OBJS)


.PHONY: all clean fclean re
