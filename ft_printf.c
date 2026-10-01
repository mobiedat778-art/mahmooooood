/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:00:06 by mobaidat          #+#    #+#             */
/*   Updated: 2026/10/01 17:15:07 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isconversion(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static int	ft_conversion(va_list type, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(type, int)));
	if (c == 's')
		return (ft_putstr(va_arg(type, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(type, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(type, int)));
	if (c == 'u')
		return (ft_putunsigned(va_arg(type, unsigned int)));
	if (c == 'x')
		return (ft_putlower(va_arg(type, unsigned int)));
	if (c == 'X')
		return (ft_putupper(va_arg(type, unsigned int)));
	if (c == '%')
		return (ft_percent());
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	type;
	int		count;
	int		i;
	char	*con;

	con = "cspdiuxX%";
	va_start(type, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && ft_isconversion(con, s[i + 1]))
		{
			count += ft_conversion(type, s[i + 1]);
			i++;
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(type);
	return (count);
}
