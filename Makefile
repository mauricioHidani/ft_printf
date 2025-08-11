# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 08:57:47 by mhidani           #+#    #+#              #
#    Updated: 2025/08/11 18:09:24 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
AR		= ar
ARFLAGS		= -rsc

INCS_DIR	= includes/
SRCS_DIR	= srcs/
OBJS_DIR	= objs/
LIBFT_DIR	= libft/

SRCS		= $(SRCS_DIR)ft_print_addr.c $(SRCS_DIR)ft_print_char.c \
		$(SRCS_DIR)ft_print_dec.c $(SRCS_DIR)ft_print_hex.c \
		$(SRCS_DIR)ft_print_hexup.c $(SRCS_DIR)ft_print_str.c \
		$(SRCS_DIR)ft_print_udec.c $(SRCS_DIR)ft_putnbr.c \
		$(SRCS_DIR)ft_putnbr_ul.c $(SRCS_DIR)ft_printf.c
OBJS		= $(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))

LIBFT_SRCS	= $(wildcard $(LIBFT_DIR)*.c)
LIBFT_OBJS	= $(LIBFT_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT_OBJS) $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT_DIR)%.o: $(LIBFT_DIR)%.c
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -c $^ -o $@

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $^ -o $@

$(OBJS_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS_DIR) $(LIBFT_OBJS)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

.PHONY: all fclean clean re
