/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:58:58 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/15 16:59:30 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printchar(int c);
int	ft_printnum(int c);
int	ft_printstr(char *str);
int	ft_printunsigneddec(unsigned int n);
int	ft_printpercentsign(int c);
int	ft_formatter (va_list args, int c);
int	ft_printf(const char *s, ...);

#endif
