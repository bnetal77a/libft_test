LIBNAME = libft.a
CC = gcc
AR = ar -rc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -I ./
FILES =	ft_atoi.c ft_bzero.c  ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(FILES:%.c=%.o)


FILES2 = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c
OBJS2 = $(FILES2:%.c=%.o)


RN_LIB = ranlib

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	@$(AR) $(LIBNAME) $(OBJS)
	@$(RN_LIB) $(LIBNAME)

bonus: $(OBJS2)
	@$(AR) $(LIBNAME) $(OBJS2)
	@$(RN_LIB) $(LIBNAME)
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(OBJS2)

fclean: clean
	@$(RM) $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re bonus
