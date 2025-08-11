/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:10:29 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 22:47:40 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_addr(void *ptr)
{
	int				count;
	unsigned long	addr;

	if (!ptr)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	addr = (unsigned long)ptr;
	count = write(1, "0x", 2);
	count += ft_putnbr_ul(addr, 16, HEX_LOW, 1);
	return (count);
}
