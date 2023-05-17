/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:56:15 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/17 16:23:00 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
//	char str[50] = "Hello";
//	int a = ft_printf("Character is: %c\n", 'Z');
//	int a1 = printf("Character is: %c\n", 'Z');
//	int b = ft_printf("Number is: %d\n", -2147483648);
//	int b1 = printf("Number is: %ld\n", -2147483648);
//	int c = ft_printf("if its given null %s\n", NULL);
//	int c1 = printf("if its given null %s\n", NULL);
//	int d = ft_printf("The unsigned int is %u\n", -1234);
//	int d1 = printf("The unsigned int is %u\n", -1234);
//	int e = ft_printf("The percent sign is %%\n", "whatever");
//	int e1 = printf("The percent sign is %%\n", "whatever");
	//int f = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42);
	int f = ft_printf("%%%s", "hello");
	//int f1 = printf("%%%%%% ");
	//printf("The printcnt is %d\n", f);
	//printf("The og printcnt is %d\n", f1);
//	printf("the length is %ld\n", ft_strlen(str));
	return (0);
}
