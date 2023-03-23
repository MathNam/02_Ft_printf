NAME		= libftprintf.a

LIBFT		= libft

EXE			= ft_printf
                
OBJS		= $(SRCS:%.c=%.o)

CFLAGS		= -Wall -Werror -Wextra

CC          = gcc

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

#Sources

SRCS		= printf_util.c \
			  list_ft.c \
			  process_arg_p1.c \
			  process_arg_p2.c \
			  conversion.c \
			  mod_p1.c \
			  mod_p2.c \
			  ft_parse_format.c \
			  ft_format_error.c \
			  ft_output.c \
			  ft_printf.c

#Commands
.SILENT: $(OBJS)

$(NAME): $(OBJS)
	@make --no-print-directory all -C $(LIBFT)
	@cp $(LIBFT)/libft.a .
	@mv libft.a $(NAME)	
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

run: all main.o
	@$(CC) $(CFLAGS) main.o $(NAME) -o $(EXE)

main.o : main.c
	@$(CC) $(CFLAGS) -c main.c

all: $(NAME)

bonus: all

clean:
	@rm -f $(OBJS) $(BNS_OBJS) main.o
	@make --no-print-directory clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME) $(EXE)
	@$(RM) -f $(LIBFT)/libft.a

re: fclean all