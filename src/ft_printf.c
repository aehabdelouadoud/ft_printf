/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:35:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 12:22:31 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_print_fmt(char fmt, va_list args)
{
	int	s;

	if (fmt == 'd' || fmt == 'i')
		s = ft_putbase(va_arg(args, int), "0123456789");
	else if (fmt == 'u')
		s = ft_putubase(va_arg(args, unsigned int), "0123456789");
	else if (fmt == 's')
		s = ft_putstr(va_arg(args, char *));
	else if (fmt == 'c')
		s = ft_putchar(va_arg(args, int));
	else if (fmt == 'x')
		s = ft_putubase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (fmt == 'X')
		s = ft_putubase(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (fmt == 'p')
		s = ft_putptr(va_arg(args, void *));
	else if (fmt == '%')
		s = ft_putchar('%');
	else
		s = 0;
	return (s);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	size_t	c;
	int		tmp;

	if (!fmt)
		return (-1);
	va_start(args, fmt);
	c = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			tmp = ft_print_fmt(*(fmt + 1), args);
		else
			tmp = ft_putchar(*fmt);
		if (tmp < 0)
			return (-1);
		c += tmp;
		fmt += 1 + (*fmt == '%');
	}
	va_end(args);
	return (c);
}
