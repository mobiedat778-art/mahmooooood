/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:39:19 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/30 15:07:52 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		count++;
	}
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
	}
	count += ft_putchar((num % 10 + '0'));
	return (count);
}
