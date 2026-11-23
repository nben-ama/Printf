/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:31 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/15 13:17:53 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	cpt;

	if (!str)
		str = "(null)";
	cpt = 0;
	while (str[cpt])
	{
		print_char(str[cpt]);
		cpt++;
	}
	return (cpt);
}
