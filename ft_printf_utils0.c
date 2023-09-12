/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:59:02 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/23 14:44:53 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//to print a single char

int	ft_printchar(int c)
{
	int	printcnt;

	printcnt = 0;
	ft_putchar_fd(c, 1);
	printcnt++;
	return (printcnt);
}

//to print a number in base 10 that can be positive or negative

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

//to print a string

int	ft_printstr(char *str)
{
	int	printcnt;

	printcnt = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	printcnt = ft_strlen(str);
	return (printcnt);
}

//to print an unsigned decimal number in base ten

int	ft_print_unsigned_dec(unsigned int n)
{
	int				printcnt;
	char			c;
	unsigned int	n2;

	printcnt = 0;
	n2 = n;
	if (n >= 0 && n <= 9)
		c = n + '0';
	if (n >= 10)
	{
		c = (n % 10) + '0';
		n = n / 10;
		ft_print_unsigned_dec(n);
	}
	write (1, &c, 1);
	printcnt = digitcnt_base(n2, 10);
	return (printcnt);
}

//to print a hexodecimal number

int	ft_print_hex(unsigned int n, char format)
{
	put_number_base(n, 16, format);
	return (digitcnt_base(n, 16));
}
