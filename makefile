# Name
NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

# Source Files
SOURCE = ft_memset.c		\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strlen.c			\
		ft_isalpha.c 		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strchr.c			\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\

OBJECTS = $(SOURCE:.c=.o)

$(NAME) : $(OBJECTS)
		@ar -rcs $(NAME) $(OBJECTS)
		@echo "You passed"

all: $(NAME)

%.o : %.c libft.h
	@$(CC) $(FLAGS) -c $<
	@echo "Compiling: $<"


clean:
	rm -rf $(OBJECTS)

fclean: clean

re: fclean all
