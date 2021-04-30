/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:28:30 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:19:34 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;
	char	*str_origin;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str_origin = str;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
			*str = *s1;
		else
			*str = *s2;
		str++;
	}
	*str = '\0';
	return (str_origin);
}
