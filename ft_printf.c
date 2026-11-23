/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem.ben-amara@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:38:24 by nben-ama          #+#    #+#             */
/*   Updated: 2026/11/17 21:34:50 by nben-ama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char type, va_list *arguments)
{
	if (type == 'c')
		return (print_char(va_arg(*arguments, int)));
	if (type == 's')
		return (print_str(va_arg(*arguments, char *)));
	if (type == 'p')
		return (print_point(va_arg(*arguments, void *)));
	if (type == 'd' || type == 'i')
		return (print_num(va_arg(*arguments, int)));
	if (type == 'u')
		return (print_pos(va_arg(*arguments, unsigned int)));
	if (type == 'x' || type == 'X')
		return (print_hex(va_arg(*arguments, unsigned int), type));
	if (type == '%')
		return (print_char('%'));
	
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		i;
	int		cpt;

	if (!format)
		return (-1);
	i = 0;
	cpt = 0;
	va_start(arguments, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			cpt += print_format(format[i], &arguments);
		}
		else
			cpt += print_char(format[i]);
		i++;
	}
	va_end(arguments);
	return (cpt);
}
