/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 07:37:14 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 09:30:39 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_putubase((t_ull)ptr, "0123456789abcdef"));
}
