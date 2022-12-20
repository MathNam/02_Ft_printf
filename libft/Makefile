NAME		= libft.a

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS		= ft_memset.c \
              ft_bzero.c \
              ft_memcpy.c \
              ft_memmove.c \
              ft_memchr.c \
              ft_memcmp.c \
              ft_strlen.c \
              ft_strlcpy.c \
              ft_strlcat.c \
              ft_strchr.c \
              ft_strrchr.c \
              ft_strnstr.c \
              ft_strncmp.c \
              ft_index.c \
              ft_atoi.c \
              ft_atoi_base.c \
              ft_isalpha.c \
              ft_isdigit.c \
              ft_isalnum.c \
              ft_isascii.c \
              ft_isprint.c \
              ft_toupper.c \
              ft_tolower.c \
              ft_calloc.c \
              ft_strdup.c \
              ft_isspace.c \
              ft_substr.c \
              ft_strjoin.c \
              ft_strtrim.c \
              ft_split.c \
              ft_itoa.c \
              ft_strmapi.c \
              ft_striteri.c \
              ft_putchar_fd.c \
              ft_putstr_fd.c \
              ft_putendl_fd.c \
              ft_putnbr_fd.c 
              
BNS_SRCS	= ft_lstnew.c \
              ft_lstadd_front.c \
              ft_lstsize.c \
              ft_lstlast.c \
              ft_lstadd_back.c \
              ft_lstdelone.c \
              ft_lstclear.c \
              ft_lstiter.c \
              ft_lstmap.c
                
OBJS		= $(SRCS:%.c=%.o)

BNS_OBJS	= $(BNS_SRCS:%.c=%.o)

CFLAGS		= -Wall -Werror -Wextra

CC          = gcc

#Commands

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) $(OBJS)

all: $(NAME) bonus
	@echo "$(GREEN)libft compiled!$(DEF_COLOR)"

bonus: $(NAME) $(BNS_OBJS)
	@$(CC) $(CFLAGS) -c $(BNS_SRCS)
	@ar rcs $(NAME) $(BNS_OBJS)

clean:
	@rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re