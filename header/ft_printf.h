/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 03:27:46 by abait-el          #+#    #+#             */
/*   Updated: 2025/11/03 06:15:20 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

typedef unsigned long long	t_ull;
typedef unsigned long long	t_ul;
typedef long long			t_ll;

int		ft_printf(char *fmt, ...);
void	ft_putbase(long long n, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putubase(unsigned long long n, char *base);
size_t	ft_strlen(char *s);

#endif
