/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:09:13 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/11 18:29:41 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_specifier(const char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_print_char(va_arg(ap, int));
	else if (type == 's')
		count = ft_print_str(va_arg(ap, char *));
	else if (type == 'p')
		count = ft_print_addr(va_arg(ap, void *));
	else if (type == 'd' || type == 'i')
		count = ft_print_dec(va_arg(ap, int));
	else if (type == 'u')
		count = ft_print_udec(va_arg(ap, unsigned int));
	else if (type == 'x')
		count = ft_print_hex(va_arg(ap, unsigned int));
	else if (type == 'X')
		count = ft_print_hexup(va_arg(ap, unsigned int));
	else if (type == '%')
		count = write(1, "%%", 1);
	return (count);
}

int	ft_printf(const char *src, ...)
{
	int		count;
	char	*pivot;
	va_list	ap;

	count = 0;
	pivot = (char *)src;
	va_start(ap, src);
	while (*pivot)
	{
		if (*pivot == '%' && *(pivot + 1))
		{
			count += ft_print_specifier(*(pivot + 1), ap);
			pivot += 2;
		}
		else
		{
			count += write(1, pivot, 1);
			pivot++;
		}
	}
	va_end(ap);
	return (count);
}
