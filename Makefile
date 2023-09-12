# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 18:57:00 by plashkar          #+#    #+#              #
#    Updated: 2023/05/23 14:46:25 by plashkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror -I

SRC=  ft_printf_utils0.c ft_printf_utils1.c ft_printf.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@cd libft; make
	@cp $(LIBFT) $(NAME)
	@ar -crs $(NAME) $(OBJ) $(LIBFT)

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean:
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: fclean clean all re
