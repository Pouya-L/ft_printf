/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:59:05 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/15 16:48:38 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_formatter (va_list args, int c)
{
	int	printcnt;

	printcnt = 0;
	if (c == 'c')
		printcnt += ft_printchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		printcnt += ft_printnum(va_arg(args, int));
	else if (c == 's')
		printcnt += ft_printstr(va_arg(args, char *));
	else if (c == 'u')
		printcnt += ft_print_unsigned_dec(va_arg(args, unsigned int));

//	else if (c == '%')
//		printcnt += ft_print_percent_sign(va_arg(args, int));
	return (printcnt);
}

int	ft_printf(const char *s, ...)
{
	int	i;
	int	printcnt;
	va_list	args;

	i = 0;
	printcnt = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			printcnt += ft_formatter(args, s[++i]);
		else
			{
				write(1, &s[i], 1);
				printcnt++;
			}
		i++;
	}
	return (printcnt);
}
