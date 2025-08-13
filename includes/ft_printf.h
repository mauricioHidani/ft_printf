/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:15:16 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 09:03:06 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

typedef struct s_specifier
{
	char	type;
	int		(*f)(va_list);
}	t_specifier;

int	ft_printf(const char *str, ...);

int	ft_print_char(va_list ap);
int	ft_print_str(va_list ap);
int	ft_print_addr(va_list ap);
int	ft_print_dec(va_list ap);
int	ft_print_udec(va_list ap);
int	ft_print_hex(va_list ap);
int	ft_print_hexup(va_list ap);
int	ft_print_perc(va_list ap);

int	ft_putnbr(const long nbr, int base, const char *digits);
int	ft_putnbr_ul(const unsigned long nbr, int base, const char *digits);

#endif
