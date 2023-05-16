/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:59:02 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/15 16:48:37 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printchar(int c)
{
	int	printcnt;

	printcnt = 0;
	ft_putchar_fd(c, 1);
	printcnt++;
	return (printcnt);
}

int	ft_printnum(int c)
{
	int		printcnt;
	int		i;
	long	b;
	int		sign;

	printcnt = 0;
	sign = 0;
	b = c;
	i = 0;
	ft_putnbr_fd(c, 1);
	if (b < 0)
		sign = 1;
	if (b < 0)
		b = b * -1;
	if (b == 0)
		return (1);
	while (b > 0)
	{
		b = b / 10;
		i++;
	}
	printcnt = (i + sign);
	return (printcnt);
}

int	ft_printstr(char *str)
{
	int	printcnt;

	printcnt = 0;
	ft_putstr_fd(str, 1);
	printcnt = ft_strlen(str);
	return (printcnt);
}

int	ft_print_unsigned_dec(unsigned int n)
{
	int		printcnt;
	char	c;
	int		i;

	printcnt = 0;
	if (n >= 0 && n <= 9)
		c = n + '0';
		printcnt ++;
	if (n >= 10)
	{
		c = (n % 10) + '0';
		n = n / 10;
		ft_print_unsigned_dec(n);
	}
	write (1, &c, 1);
	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	printcnt = (i + 1);
	return (printcnt);
}

int	ft_print_percent_sign(int c)
{
	int	printcnt;

	printcnt = 1;
	write (1, "%", 1);
	return (printcnt);
}
