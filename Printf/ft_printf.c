/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:32:35 by bde-souz          #+#    #+#             */
/*   Updated: 2023/10/31 15:48:27 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tipo(const char *format, va_list args, int i, int j)
{
	if (format[j] == 's')
		i = ft_is_s(va_arg(args, char *), i);
	if (format[j] == 'c')
		i = ft_is_c(va_arg(args, int), i);
	if (format[j] == 'd' || format[j] == 'i')
		i = ft_is_d(va_arg(args, int), i);
	if (format[j] == 'u')
		i = ft_is_u(va_arg(args, long int), i);
	if (format[j] == 'x')
		i = ft_is_x(va_arg(args, size_t), i);
	if (format[j] == 'X')
		i = ft_is_xup(va_arg(args, size_t), i);
	if (format[j] == '%')
		i = ft_is_por(va_arg(args, int), i);
	if (format[j] == 'p')
		i = ft_is_ptr(va_arg(args, void *), i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			i = ft_tipo(format, args, i, ++j);
		}
		else
		{
			write(1, &format[j], 1);
			i++;
		}
		j++;
	}
	va_end(args);
	return (i);
}
