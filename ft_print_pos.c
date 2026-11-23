/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:38 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/15 13:17:48 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pos(unsigned int n)
{
	int	cpt;

	cpt = 0;
	if (n >= 10)
		cpt += print_pos(n / 10);
	cpt += print_char((n % 10) + '0');
	return (cpt);
}
