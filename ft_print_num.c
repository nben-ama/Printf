/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:49 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/15 13:17:40 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(int n)
{
	long	nb;
	int		cpt;

	nb = n;
	cpt = 0;
	if (nb < 0)
	{
		cpt += print_char('-');
		nb = -nb;
	}
	cpt += print_pos((unsigned int)nb);
	return (cpt);
}
