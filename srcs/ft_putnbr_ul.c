/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:16:29 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:29:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ul(const unsigned long nbr, int base, const char *digits)
{
	int				count;
	char			digit;
	unsigned long	n;

	count = 0;
	digit = 0;
	n = nbr;
	if (n >= (unsigned long)base)
		count += ft_putnbr_ul(n / base, base, digits);
	digit = digits[n % base];
	count += write(1, &digit, 1);
	return (count);
}
