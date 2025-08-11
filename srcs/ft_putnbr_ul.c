/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:16:29 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 22:38:42 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ul(const unsigned long nbr, int base, const char *digits, int fd)
{
	int				count;
	char			digit;
	unsigned long	n;

	count = 0;
	digit = 0;
	n = nbr;
	if (n >= (unsigned long)base)
		count += ft_putnbr_ul(n / base, base, digits, fd);
	digit = digits[n % base];
	count += write(fd, &digit, 1);
	return (count);
}
