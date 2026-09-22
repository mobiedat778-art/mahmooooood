/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:37:27 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/22 17:16:29 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		count = 0;
		j = 0;
		while (little[j] && (i + j) < len && little[j] == big[i + j])
		{
			j++;
			count++;
		}
		if (count == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
