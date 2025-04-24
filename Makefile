# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonteag <amonteag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 18:21:37 by amonteag          #+#    #+#              #
#    Updated: 2025/04/24 21:17:21 by amonteag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
##@echo "Creando $(NAME)"
	$(AR) $(NAME) $(OBJ) $(LIBFT_DIR)/*.o
##@echo "$(NAME) Ok"

$(LIBFT):
	make -C $(LIBFT_DIR) bonus


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	make -C $(LIBFT_DIR) clean
##@echo "Archivos printf .o eliminados"

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)
##@echo "$(NAME) eliminada"

re: fclean all