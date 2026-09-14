/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 20:49:18 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/14 21:45:39 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			slen ;
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	new = malloc(slen + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
