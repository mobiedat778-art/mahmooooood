/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:19:55 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/15 18:17:41 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		c = num % 10 + '0';
		ft_putnbr_fd(num / 10, fd);
		write (fd, &c, 1);
	}
	else
	{
		c = num + '0';
		write (fd, &c, 1);
	}
}
