/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:58:58 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/15 17:26:15 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printchar(int c);
int	ft_printnum(int c);
int	ft_printstr(char *str);
int	ft_print_unsigned_dec(unsigned int n);
int	ft_print_percent_sign(int c);
int	ft_formatter (va_list args, int c);
int	ft_printf(const char *s, ...);

#endif
