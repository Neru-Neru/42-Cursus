/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:26:30 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:20:12 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char		*str1;
	const char	*str2;

	str1 = (char *)buf1;
	str2 = (const char *)buf2;
	if ((str1 < str2 + n) && (str1 < str2))
	{
		while (n > 0)
		{
			*(str1 + n - 1) = *(str2 + n - 1);
			n--;
		}
	}
	while (n > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (buf1);
}
