/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:51:11 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/25 04:14:49 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putubase(t_ull n, char *base)
{
	ssize_t	r;

	r = 0;
	if (n >= (t_ull)ft_strlen(base))
		r = ft_putubase(n / ft_strlen(base), base);
	ft_putchar(base[n % ft_strlen(base)]);
	return (1 + r);
}
