/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:59:02 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/10 15:33:09 by plashkar         ###   ########.fr       */
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
