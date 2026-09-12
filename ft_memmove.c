/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:01:19 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/07 17:07:44 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*de;
	const unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	de = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (de < sr)
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		while (n > 0)
		{
			n--;
			de[n] = sr[n];
		}
	}
	return (dest);
}
