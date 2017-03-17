#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 19:43:04 by ddinaut           #+#    #+#              #
#    Updated: 2017/03/17 15:11:48 by ddinaut          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_PATH = ./srcs/
INC_PATH = -I./includes/

COL_BLACK  = \033[1;30m
COL_RED    = \033[1;31m
COL_GREEN  = \033[1;32m
COL_YELLOW = \033[1;33m
COL_BLUE   = \033[1;34m
COL_PURPLE = \033[1;35m
COL_WHITE  = \033[1;37m

SRC =\
\
ft_bzero.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putstr.c \
ft_putstrlen.c \
ft_putstrlen_fd.c \
ft_putstr_fd.c \
ft_strcat.c \
ft_strchr.c \
ft_strclr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_strequ.c \
ft_striter.c \
ft_striteri.c \
ft_strjoin.c \
ft_strjoin_fl.c \
ft_strjoin_fr.c \
ft_strjoin_fb.c \
ft_strlcat.c \
ft_strlen.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnequ.c \
ft_strnew.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strsplit.c \
ft_strstr.c \
ft_strsub.c \
ft_strtrim.c \
ft_tolower.c \
ft_toupper.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memset.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_memalloc.c \
ft_memdel.c \
ft_itoa.c \
ft_itoa_base.c \
ft_atoi.c \
ft_lstadd.c \
ft_lstdel.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstnew.c \

SRCS = $(addprefix $(SRC_PATH), $(SRC))
O = $(notdir $(SRC))
OB = $(basename $(O))
OBJ = $(addsuffix .o ,$(OB))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ): $(SRCS)
	@echo "$(COL_YELLOW)[    BUILDING LIBFT    ]\n"
	@$(CC) -c $(FLAGS) $(INC_PATH) $(SRCS)
	@echo "$(COL_YELLOW)-> $(COL_BLACK)compilation done."
	@echo "$(COL_YELLOW)-> $(COL_BLACK)object created."

$(NAME): $(OBJ)
	@ar rc $@ $(OBJ)
	@echo "$(COL_YELLOW)-> $(COL_BLACK)$@ created."
	@ranlib $@
	@echo "$(COL_YELLOW)-> $(COL_BLACK)$@ sorted.\n"

clean:
	@echo "$(COL_YELLOW)[    CLEANING LIBFT    ]\n"
	@rm -rf $(OBJ)
	@echo "$(COL_YELLOW)-> $(COL_BLACK)object removed.\n"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COL_YELLOW)-> $(COL_BLACK)$(NAME) removed.\n"

re: fclean all