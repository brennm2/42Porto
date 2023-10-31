
#include <limits.h>
#include <stdarg.h> // va_start, va_arg, va_copy, va_end
#include <stdio.h>  // para usar write
#include <stdlib.h> // para usar malloc e free
#include <unistd.h> // para printf real

int	ft_is_c(int c, int i)
{
	if (c == 0)
	{
		i++;
		write(1, "", 1);
		return (i);
	}	
	if (!c)
		return (ft_is_s("(null)", i));
	write(1, &c, 1);
	i++;
	return (i);
}
int	ft_is_s(char *s, int i)
{
	if (!s)
		return (ft_is_s("(null)", i));
	while (*s)
	{
		i = ft_is_c(*s, i);
		s++;
	}
	return (i);
}


int	ft_is_d(int long d, int i)
{
	int long	num;

	num = d;
	if (num < 0)
	{
		i = ft_is_c('-', i);
		num = num * -1;
	}
	if (num > 9)
	{
		i = ft_is_d(num / 10, i);
	}
	i = ft_is_c(num % 10 + '0', i);
	return (i);
}



int	ft_is_x(unsigned long long int x, int i)
{
	if (x == 0)
	{
		i = ft_is_c('0', i);
		return (i);
	}
	if (x >= 16)
	{
		i = ft_is_x(x / 16, i);
		i = ft_is_x(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_is_c(x + '0', i);
		else
			i = ft_is_c(x + 'a' - 10, i);
	}
	return (i);
}

int	ft_is_xup(size_t x, int i)
{
	unsigned int	u;

	u = (unsigned int)x;
	if (u == 0)
		i = ft_is_c('0', i);
	if (u >= 16)
	{
		i = ft_is_xup(u / 16, i);
		i = ft_is_xup(u % 16, i);
	}
	else
	{
		if (u <= 9)
			i = ft_is_c(u + '0', i);
		else
			i = ft_is_c(u + 'A' - 10, i);
	}
	return (i);
}

int	ft_is_u(unsigned int n, int i)
{
	unsigned long	num;

	//if (n > 4294967295)
	//	return (ft_is_d(0, i));
	num = n;
	if (num < 0)
	{
		ft_is_c('-', i);
		num = num * -1;
	}
	if (num > 9)
	{
		i = ft_is_d(num / 10, i);
	}
	i = ft_is_c(num % 10 + '0', i);
	return (i);
}

int	ft_is_por(int c, int i)
{
	ft_is_c('%', i);
	i++;
	return (i);
}
static int	ft_sup_x(unsigned long long int x, int i)
{
	if (x == 0)
	{
		i = ft_is_c('0', i);
		return (i);
	}
	if (x >= 16)
	{
		i = ft_is_x(x / 16, i);
		i = ft_is_x(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_is_c(x + '0', i);
		else
			i = ft_is_c(x + 'a' - 10, i);
	}
	return (i);
}

int	ft_is_ptr(void *ptr, int i)
{
	if(!ptr)
		return (ft_is_s("(nil)", i));
	unsigned long long int t_ptr;

	t_ptr = (unsigned long long int)ptr;
	i = ft_is_s("0x", i);
	i = ft_sup_x(t_ptr, i);
	return (i);
}

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
	if (format[j] == 'p')
		i = ft_is_ptr(va_arg(args, void *), i);
	if (format[j] == '%')
	{
		i = ft_is_por(va_arg(args, int), i);
	}
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

int	main(void)
{
	int	i;

	// i = ft_printf("%%\n");
	// printf("%i\n", i);
	// i = printf("%%\n");
	// printf("%i\n\n", i);
	// //
	i = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 
42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("%i\n\n", i);
	i = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 
42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("%i\n\n", i);
	
	//printf("%ld", LONG_MAX);
	// //
	// i = ft_printf("%s\n", NULL);
	// printf("%i\n", i);
	// i = printf("%s\n", NULL);
	// printf("%i\n\n", i);
	// //
	// i = ft_printf("%d\n", 125);
	// printf("%i\n", i);
	// i = printf("%d\n", 125);
	// printf("%i\n\n", i);
	// //
	// i = ft_printf("%i\n", -125);
	// printf("%i\n", i);
	// i = printf("%i\n", -125);
	// printf("%i\n\n", i);
	// //
	// i = ft_printf("%u\n", 5556);
	// printf("%i\n", i);
	// i = printf("%u\n", 5556);
	// printf("%i\n\n", i);
	// //
	// i = ft_printf("%x\n", 42);
	// printf("%i\n", i);
	// i = printf("%x\n", 42);
	// printf("%i\n\n", i);
	// //
	// i = ft_printf("%X\n", 987);
	// printf("%i\n", i);
	// i = printf("%X\n", 987);
	// printf("%i\n\n", i);
	//
	// %c, %s, %d, %i, %u, %x, %X, %%\n
}
