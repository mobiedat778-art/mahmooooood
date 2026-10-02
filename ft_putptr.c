/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:36:20 by mobaidat          #+#    #+#             */
/*   Updated: 2026/10/02 20:59:38 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_hexa(uintptr_t n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_putptr_hexa(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	uintptr_t	address;
	int			count;

	address = (uintptr_t)ptr;
	count = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	count += ft_putstr("0x");
	count += ft_putptr_hexa(address);
	return (count);
}
