/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:40:40 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/23 14:45:11 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//to print a number in any base we want, it can not be negative

void	put_number_base(unsigned long long n, unsigned int base, char format)
{
	char	c;

	if (n >= base)
	{
		put_number_base(n / base, base, format);
		put_number_base(n % base, base, format);
	}
	else
	{
		if (n >= 0 && n <= 9)
			c = n + '0';
		else
		{
			if (format == 'X')
				c = n - 10 + 'A';
			if (format == 'x')
				c = n - 10 + 'a';
		}
		write(1, &c, 1);
	}
}

//to count the digit of the number in any base

int	digitcnt_base(unsigned long long num, unsigned long long base)
{
	int	digitcnt;
	int	sign;

	sign = 0;
	digitcnt = 0;
	if (num < 0)
	{
		sign = 1;
		num = num * -1;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / base;
		digitcnt++;
	}
	return (digitcnt + sign);
}

//to print a pointer

int	ft_print_ptr(unsigned long long ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	write (1, "0x", 2);
	put_number_base(ptr, 16, 'x');
	return (digitcnt_base(ptr, 16) + 2);
}
