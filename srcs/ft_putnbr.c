/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:26:33 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 22:33:13 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(const long nbr, int base, const char *digits, int fd)
{
	int		count;
	char	digit;
	long	n;

	count = 0;
	n = nbr;
	if (n < 0)
	{
		count += write(fd, "-", 1);
		n = -n;
	}
	if (n >= (long)base)
		count += ft_putnbr(n / base, base, digits, fd);
	digit = digits[n % base];
	count += write(fd, &digit, 1);
	return (count);
}
