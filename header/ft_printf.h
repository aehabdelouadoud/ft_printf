/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 03:27:46 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 12:13:22 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

typedef unsigned long long	t_ull;
typedef unsigned long long	t_ul;
typedef long long			t_ll;

int		ft_printf(const char *fmt, ...);
ssize_t	ft_putbase(const long long n, char *base);
ssize_t	ft_putchar(const char c);
ssize_t	ft_putstr(const char *s);
ssize_t	ft_putubase(const unsigned long long n, char *base);
ssize_t	ft_strlen(const char *s);
ssize_t	ft_putptr(const void *ptr);

#endif
