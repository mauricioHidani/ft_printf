/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:43:32 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/11 18:09:38 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	count;

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
