/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:09:13 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/12 09:07:09 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_specifier(const char type, va_list ap)
{
	size_t		i;
	t_specifier	specifiers[9];

	specifiers[0] = (t_specifier){'c', ft_print_char};
	specifiers[1] = (t_specifier){'s', ft_print_str};
	specifiers[2] = (t_specifier){'p', ft_print_addr};
	specifiers[3] = (t_specifier){'d', ft_print_dec};
	specifiers[4] = (t_specifier){'i', ft_print_dec};
	specifiers[5] = (t_specifier){'u', ft_print_udec};
	specifiers[6] = (t_specifier){'x', ft_print_hex};
	specifiers[7] = (t_specifier){'X', ft_print_hexup};
	specifiers[8] = (t_specifier){'%', ft_print_perc};
	i = 0;
	while (i < (sizeof(specifiers) / sizeof(specifiers[0])))
	{
		if (specifiers[i].type == type)
			return (specifiers[i].f(ap));
		i++;
	}
	return (0);
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
