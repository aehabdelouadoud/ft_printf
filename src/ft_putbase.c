/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:51:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 07:15:42 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(long long n, char *base)
{
	size_t	len;

	len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		ft_putubase(-(unsigned long long)n, base);
		return ;
	}
	if ((unsigned long long)n >= len)
		ft_putbase(n / len, base);
	ft_putchar(base[n % len]);
}
