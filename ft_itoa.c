/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:45:20 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/14 14:02:35 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	ft_fill_str(char *str, long num, int len, int limit)
{
	int	j;

	j = 0;
	while (j < len - limit)
	{
		if (num >= 10)
		{
			str[len - j - 1] = num % 10 + '0';
			num = num / 10;
		}
		else
			str[len - j - 1] = num + '0';
		j++;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	int			len;
	int			limit;
	long		num;
	char		*str;

	num = n;
	len = ft_get_len(num);
	limit = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		limit = 1;
		str[0] = '-';
	}
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	ft_fill_str(str, num, len, limit);
	return (str);
}
