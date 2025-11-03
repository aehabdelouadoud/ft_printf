/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:51:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 06:31:48 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putubase(unsigned long long n, char *base)
{
	size_t	len;

	len = ft_strlen(base);
	if (n >= (unsigned long long)len)
		ft_putbase(n / len, base);
	ft_putchar(*(base + (n % len)));
}
