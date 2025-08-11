/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:55:37 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 23:01:39 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(const unsigned int nbr)
{
	int	count;

	count = ft_putnbr_ul((unsigned long)nbr, 16, HEX_LOW, 1);
	return (count);
}
