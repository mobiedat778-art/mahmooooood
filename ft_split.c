/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:42:16 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/24 19:29:53 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_error(char **arr, int i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (NULL);
}

static char	**allocate_pointers(char **arr, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		n = j;
		while (s[j] && s[j] != c)
			j++;
		arr[i] = malloc(j - n + 1);
		if (!arr[i])
			return (free_error(arr, i));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

static void	fill_arr(char **arr, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i < count)
	{
		j = 0;
		while (s[n] && s[n] == c)
			n++;
		while (s[n] && s[n] != c)
		{
			arr[i][j] = s[n];
			j++;
			n++;
		}
		arr[i][j] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	arr = malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	if (!allocate_pointers(arr, s, c, count))
		return (NULL);
	fill_arr(arr, s, c, count);
	return (arr);
}
