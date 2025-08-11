/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:53:38 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/08 22:56:52 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udec(const unsigned int nbr)
{
	int	count;

	count = ft_putnbr_ul((unsigned long)nbr, 10, DEC, 1);
	return (count);
}
