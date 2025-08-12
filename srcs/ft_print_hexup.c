/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:03:43 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:36:02 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexup(va_list ap)
{
	int				count;
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	count = ft_putnbr_ul(nbr, 16, "0123456789ABCDEF");
	return (count);
}
