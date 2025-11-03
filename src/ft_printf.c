/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:35:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 04:45:19 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			fmt++;
			if (*fmt == 'd' || *fmt == 'i')
				ft_putbase(va_arg(args, long long), "0123456789");
			else if (*fmt == 'u')
				ft_putubase(va_arg(args, long long), "0123456789");
			else if (*fmt == 's')
				ft_putstr(va_arg(args, char *));
			else if (*fmt == 'c')
				ft_putchar(va_arg(args, int));
			else if (*fmt == 'x' || *fmt == 'p')
				ft_putbase((long long)va_arg(args, void *), "0123456789abcef");
			else if (*fmt == 'X')
				ft_putbase((long long)va_arg(args, void *), "0123456789ABCEF");
			else if (*fmt == '%')
				ft_putchar('%');
			else
				fmt++;
		}
		else
			ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (count);
}
