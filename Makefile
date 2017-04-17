#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 19:43:04 by ddinaut           #+#    #+#              #
#    Updated: 2017/04/17 18:09:38 by ddinaut          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Output file #
NAME = libft.a

# Details #
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
E_FLAGS =

# Path #
OBJ_PATH = obj
SRC_PATH = srcs
INC_PATH = includes/

# Colors #
COL_BLACK  = \033[1;30m
COL_RED    = \033[1;31m
COL_GREEN  = \033[1;32m
COL_YELLOW = \033[1;33m
COL_BLUE   = \033[1;34m
COL_PURPLE = \033[1;35m
COL_WHITE  = \033[1;37m

AR	= ar rc $(NAME)
RAN = ranlib $(NAME)
INC = -I $(INC_PATH)

# Sources #
SRCS = \
\
	ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
	ft_putstrlen.c ft_putstrlen_fd.c ft_putstr_fd.c ft_print_binary.c \
\
	ft_strcat.c ft_strchr.c ft_strreplace.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c \
	ft_striter.c ft_striteri.c ft_strjoin.c ft_strjoin_fl.c ft_strjoin_fr.c ft_strjoin_fb.c ft_strlcat.c ft_strlen.c \
	ft_strnlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
	ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c \
\
	ft_memcpy.c ft_memccpy.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c ft_bzero.c \
\
	ft_array_cpy.c ft_array_join.c ft_array_print.c ft_array_free.c ft_array_len.c ft_split_whitespaces.c \
\
	ft_itoa.c ft_itoa_base.c ft_atoi.c \
\
	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c get_next_line.c

OBJ = $(SRC:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRCS))

# Rules #
.PHONY: all clean fclean re logo

all: $(NAME)

#$(NAME): logo $(OBJ)
$(NAME): logo $(OBJ)
	@$(AR) $(OBJ)
	@$(RAN)

$(OBJ): $(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -o $@ $(FLAGS) $(E_FLAGS) $(INC) -c $<
	@printf "$(COL_GREEN)%s -> %s                            \r" $@ $<

#logo:
#	@printf " _    _  ___  ___  ___ \n"
#	@printf "| |  | || . >| __||_ _|\n"
#	@printf "| |_ | || . \| _|  | | \n"
#	@printf "|___||_||___/|_|   |_| \n"
#	@printf "                       \n"

clean:
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
