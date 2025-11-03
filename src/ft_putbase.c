/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:51:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 10:03:44 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putbase(long long n, char *base)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (1 + ft_putubase(-(unsigned long long)n, base));
	}
	return (ft_putubase(n, base));
}
