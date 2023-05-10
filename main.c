/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:56:15 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/10 17:30:34 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
//	char str[50] = "Hello";
	int a = ft_printf("Hello%c\n", 'Z');
	int b = printf("Hello%c\n", 'Z');
	printf("The printcnt is %d\n", a);
	printf("The og printcnt is %d\n", b);
//	printf("the length is %ld\n", ft_strlen(str));
	return (0);
}
