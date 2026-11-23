/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nben-ama <nejem@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:11:00 by nben-ama         #+#    #+#             */
/*   Updated: 2026/11/10 17:11:00 by nben-ama        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(char character);
int	print_str(char *text);
int	print_num(int number);
int	print_pos(unsigned int number);
int	print_hex(unsigned long number, char type);
int	print_point(void *address);

#endif
