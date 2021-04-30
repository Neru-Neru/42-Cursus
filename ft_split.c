/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:45:45 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:19:49 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitnum(char const *s, char c)
{
	int	split_num;

	split_num = 1;
	while (*s != '\0')
	{
		if (*s == c)
			split_num++;
		s++;
	}
	return (split_num);
}

int	ft_splitlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strs;
	int		split_num;
	int		split_len;

	split_num = ft_splitnum(s, c);
	strs = (char **)malloc(sizeof(char *) * (split_num + 1));
	if (!strs)
		return (NULL);
	while (split_num > 0)
	{
		split_len = ft_splitlen(s, c);
		str = ft_strncpy(str, s, split_len);
		if (!str)
			return (NULL);
		*strs = str;
		strs++;
		s += split_len;
		split_num--;
	}
	**strs = '\0';
	return (strs - split_num);
}
