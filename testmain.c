/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:29:41 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/17 11:00:36 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

#include "ft_printf.h"

int	digitcnt_ptr(unsigned long long  num)
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

void	put_ptr_number(unsigned long long  n)
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

int	main(void)
{
	int *ptr;

	*ptr = 42;
	printf("the address of ptr is %p\n", ptr);
	printf("the number of digits is: %d\n", ft_print_ptr((unsigned long long)ptr));
	return (0);
}
