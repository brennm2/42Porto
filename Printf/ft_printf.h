/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-souz <bde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:45:16 by bde-souz          #+#    #+#             */
/*   Updated: 2023/11/03 13:29:17 by bde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

// Strings
int	ft_is_s(char *s, int i);
int	ft_is_c(int c, int i);

// Numbers
int	ft_is_d(int d, int i);
int	ft_is_u(unsigned int n, int i);

// Hexa
int	ft_is_x(unsigned int x, int i);
int	ft_is_xup(unsigned int x, int i);
int	ft_is_ptr(void *ptr, int i);

#endif
