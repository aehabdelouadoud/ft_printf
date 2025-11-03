/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:35:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 06:31:29 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static void	ft_putptr(void *ptr)
{
	if (!ptr)
		ft_putstr("(nil)");
	else
	{
		ft_putstr("0x");
		ft_putubase((t_ull)ptr, "0123456789abcdef");
	}
}

static void	ft_print_fmt(char fmt, va_list args)
{
	if (fmt == 'd' || fmt == 'i')
		ft_putbase(va_arg(args, int), "0123456789");
	else if (fmt == 'u')
		ft_putubase(va_arg(args, unsigned int), "0123456789");
	else if (fmt == 's')
		ft_putstr(va_arg(args, char *));
	else if (fmt == 'c')
		ft_putchar(va_arg(args, int));
	else if (fmt == 'x')
		ft_putubase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (fmt == 'X')
		ft_putubase(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (fmt == 'p')
		ft_putptr(va_arg(args, void *));
	else if (fmt == '%')
		ft_putchar('%');
}

int	ft_printf(char *fmt, ...)
{
	va_list	args;
	size_t	count;

	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			ft_print_fmt(*(fmt + 1), args);
			fmt += 2;
		}
		else
			ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (count);
}
