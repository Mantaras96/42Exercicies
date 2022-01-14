NAME	=	libft.a
SRC		=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \

OBJECTS	=	$(SRC:%.c=%.o)

CC		=	@gcc
CCFLAGS	=	-Wall -Werror -Wextra

$(NAME):
	$(CC) $(CCFLAGS) -c $(SRC) -I ./
	@ar rc $(NAME) $(OBJECTS)
	@echo "Done!"

all: $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
			