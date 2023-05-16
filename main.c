/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:56:15 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/15 13:18:47 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
//	char str[50] = "Hello";
//	int a = ft_printf("Character is: %c\n", 'Z');
//	int a1 = printf("Character is: %c\n", 'Z');
//	int b = ft_printf("Number is: %d\n", -2147483648);
//	int b1 = printf("Number is: %d\n", -2147483648);
//	int c = ft_printf("The string is %s\n", "Cha Cha Cha");
//	int c1 = printf("The string is %s\n", "Cha Cha Cha");
	int d = ft_printf("The unsigned int is %u\n", 1232);
	int d1 = printf("The unsigned int is %u\n", 1232);

	printf("The printcnt is %d\n", d);
	printf("The og printcnt is %d\n", d1);
//	printf("the length is %ld\n", ft_strlen(str));
	return (0);
}
