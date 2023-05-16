/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:48:56 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/16 16:14:48 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digitcnt_ptr(uintptr_t num)
{
	int	digitcnt;

	digitcnt = 0;
	while (num != 0)
	{
		num = num / 16;
		digitcnt++;
	}
	return (digitcnt);
}

void	put_ptr_number(uintptr_t n)
{
	char	c;

	if (n >= 16)
	{
		put_ptr_number(n / 16);
		put_ptr_number(n % 16);
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
	}
	write(1, &c, 1);
}

int	ft_print_ptr(unsigned long long ptr)
{
	write (1, "0x", 2);
	put_ptr_number(ptr);
	return (digitcnt_ptr(ptr) + 2);
}
