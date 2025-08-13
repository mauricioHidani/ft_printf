/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:55:37 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:35:03 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(va_list ap)
{
	int				count;
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	count = ft_putnbr_ul(nbr, 16, "0123456789abcdef");
	return (count);
}
