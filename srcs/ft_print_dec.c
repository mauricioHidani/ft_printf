/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:50:33 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:32:17 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(va_list ap)
{
	int		count;
	long	nbr;

	nbr = (long)va_arg(ap, int);
	count = ft_putnbr(nbr, 10, "0123456789");
	return (count);
}
