/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:19:47 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:20:28 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*src_p;
	char		*dest_p;

	dest_p = (char *)dest;
	src_p = (const char *)src;
	while (n > 0)
	{
		*dest_p = *src_p;
		src_p++;
		dest_p++;
		n--;
		if (*src_p == c)
			break ;
	}
	return (dest_p);
}
