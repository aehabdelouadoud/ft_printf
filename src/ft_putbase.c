/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:51:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 05:17:17 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

# define FT_LLONG_MAX	9223372036854775807LL
# define FT_LLONG_MIN	(-FT_LLONG_MAX - 1LL)

void	ft_putbase(long long n, char *base)
{
	size_t	len;

	len = ft_strlen(base);
	if (n == FT_LLONG_MIN && len == 10)
	{
		if (len == 10)
			ft_putstr("-9223372036854775808");
		else if (len == 16)
			ft_putstr("-0x8000000000000000");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= (long long)len)
		ft_putbase(n / len, base);
	ft_putchar(*(base + (n % len)));
}
