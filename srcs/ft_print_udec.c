/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:53:38 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:34:04 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udec(va_list ap)
{
	int				count;
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	count = ft_putnbr_ul(nbr, 10, "0123456789");
	return (count);
}
