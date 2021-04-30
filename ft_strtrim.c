/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:30:15 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:18:48 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_trimmed_len(char const *s1, char const *set, int set_len)
{
	int	i;
	int	j;
	int	len;
	int	flg;

	len = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		flg = 0;
		while (s1[i + j] == set[j])
		{
			if (j == set_len - 1)
				flg = 1;
			j++;
		}
		if (flg)
			i += set_len - 1;
		else
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		flg;
	int		set_len;
	int		trimmed_len;
	char	*s1_cpy;

	set_len = ft_strlen((char *) set);
	trimmed_len = ft_get_trimmed_len(s1, set, set_len);
	s1_cpy = (char *)malloc(sizeof(char) * trimmed_len + 1);
	while (*s1 != '\0')
	{
		i = 0;
		flg = 0;
		while (*(s1 + i) == set[i])
		{
			if (i == set_len - 1)
				i += set_len - 1;
			i++;
		}
		if (!flg)
			*s1_cpy = *s1;
		i++;
		s1_cpy++;
	}
	return (s1_cpy - trimmed_len + 1);
}
