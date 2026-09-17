/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:56:58 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/15 09:56:03 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			slen;

	if (!s || !f)
		return ;
	i = 0;
	slen = ft_strlen(s);
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}
