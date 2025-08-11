/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:15:16 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/11 18:08:43 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define DEC "0123456789"
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

int	ft_printf(const char *str, ...);

int	ft_print_char(const char c);
int	ft_print_str(const char *str);
int	ft_print_addr(void *ptr);
int	ft_print_dec(const int nbr);
int	ft_print_udec(const unsigned int nbr);
int	ft_print_hex(const unsigned int nbr);
int	ft_print_hexup(const unsigned int nbr);

int	ft_putnbr(const long nbr, int base, const char *digits, int fd);
int	ft_putnbr_ul(const unsigned long nbr, int base, const char *digits, int fd);

#endif
