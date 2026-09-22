/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:08:44 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/22 12:43:16 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*de;
	const unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	de = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}
