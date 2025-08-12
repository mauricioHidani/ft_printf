/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:26:33 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:46:00 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(const long nbr, int base, const char *digits)
{
	int		count;
	char	digit;
	long	n;

	count = 0;
	n = nbr;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= (long)base)
		count += ft_putnbr(n / base, base, digits);
	digit = digits[n % base];
	count += write(1, &digit, 1);
	return (count);
}
