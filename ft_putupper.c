/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:30:55 by mobaidat          #+#    #+#             */
/*   Updated: 2026/10/02 20:58:03 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupper(unsigned int n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_putupper(n / 16);
	}
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
