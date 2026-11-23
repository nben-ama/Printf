/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:58 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/15 13:17:26 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long number, char type)
{
	char	*base;
	int		cpt;

	base = "0123456789abcdef";
	if (type == 'X')
		base = "0123456789ABCDEF";
	cpt = 0;
	if (number >= 16)
		cpt += print_hex(number / 16, type);
	cpt += print_char(base[number % 16]);
	return (cpt);
}
