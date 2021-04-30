/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:57:09 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/30 14:31:58 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return (0);
	while (*s != '\0' || c == 0)
	{
		if (*s == c)
			return ((char *)s);
		if (c == 0)
			break ;
		s++;
	}
	return (NULL);
}
