/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:10:29 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:37:00 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_addr(va_list ap)
{
	int				count;
	unsigned long	addr;

	addr = (unsigned long)va_arg(ap, void *);
	if (!addr)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	count = write(1, "0x", 2);
	count += ft_putnbr_ul(addr, 16, "0123456789abcdef");
	return (count);
}
