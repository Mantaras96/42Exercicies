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
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c
			


OBJECTS	=	$(SRC:%.c=%.o)

BONUS_OBJS = $(BONUS:%.c=%.o)

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

bonus:
	$(CC) $(CCFLAGS) -c $(BONUS) -I ./
	@ar rc $(NAME) $(BONUS_OBJS) 
	@echo "Done!"
			