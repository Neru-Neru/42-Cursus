/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:56:22 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:33:47 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	i;
	unsigned int	j;

	src_length = (unsigned int)ft_strlen(src);
	j = ft_strlen(dest);
	if (size < j)
		return (size + src_length);
	i = 0;
	while (src[i] != '\0' && i + j < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (src_length + j);
}
