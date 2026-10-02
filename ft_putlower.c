/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:05:20 by mobaidat          #+#    #+#             */
/*   Updated: 2026/10/02 20:58:26 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlower(unsigned int n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_putlower(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
