/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:03:43 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 23:09:13 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexup(const unsigned int nbr)
{
	int	count;

	count = ft_putnbr_ul((unsigned long)nbr, 16, HEX_UP, 1);
	return (count);
}
