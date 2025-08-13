# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 08:57:47 by mhidani           #+#    #+#              #
#    Updated: 2025/08/13 11:12:56 by mhidani          ###   ########.fr        #
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

SRCS		= $(SRCS_DIR)ft_print_addr.c $(SRCS_DIR)ft_print_char.c \
		$(SRCS_DIR)ft_print_dec.c $(SRCS_DIR)ft_print_hex.c \
		$(SRCS_DIR)ft_print_hexup.c $(SRCS_DIR)ft_print_str.c \
		$(SRCS_DIR)ft_print_udec.c $(SRCS_DIR)ft_putnbr.c \
		$(SRCS_DIR)ft_putnbr_ul.c $(SRCS_DIR)ft_print_perc.c \
		$(SRCS_DIR)ft_printf.c
OBJS		= $(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $^ -o $@

$(OBJS_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
