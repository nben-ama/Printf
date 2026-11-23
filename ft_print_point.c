/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:44 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/11 22:40:29 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_point(void *adresse)
{
	unsigned long	nb;
	int				cpt;

	if (!adresse)
		return (print_str("(nil)"));
	nb = (unsigned long)adresse;
	cpt = print_str("0x");
	cpt += print_hex(nb, 'x');
	return (cpt);
}
