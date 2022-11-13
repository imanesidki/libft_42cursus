NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

sources = ft_isascii.c ft_memmove.c ft_strlen.c ft_isdigit.c\
		  ft_striteri.c ft_memset.c ft_putstr_fd.c\
		  ft_bzero.c ft_isprint.c ft_strchr.c ft_strrchr.c\
		  ft_strncmp.c ft_putendl_fd.c ft_split.c\
		  ft_memchr.c ft_atoi.c ft_strtrim.c ft_strjoin.c\
		  ft_substr.c ft_strnstr.c ft_strmapi.c ft_putnbr_fd.c\
		  ft_isalnum.c ft_memcmp.c ft_strlcat.c ft_tolower.c\
		  ft_strdup.c ft_itoa.c ft_isalpha.c ft_memcpy.c\
		  ft_strlcpy.c ft_toupper.c ft_calloc.c ft_putchar_fd.c\


BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c\
		ft_lstlast.c ft_lstdelone.c ft_lstclear.c\


objet_bonus = $(BONUS:%.c=%.o)

objet = $(sources:%.c=%.o)

all: $(NAME)

$(NAME): $(objet)
	ar -rc $(NAME) $(objet)

bonus : $(objet_bonus)
	ar -rc $(NAME) $(objet_bonus)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(objet) $(objet_bonus)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re all bonus
