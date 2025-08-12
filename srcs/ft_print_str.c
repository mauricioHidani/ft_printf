/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:43:32 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 08:27:33 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list ap)
{
	int		count;
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
	{
		count = write(1, "(null)", 6);
		return (count);
	}
	count = 0;
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
