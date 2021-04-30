/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 12:44:48 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/30 14:26:59 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	char	*buf_p;
	char	ch_word;

	buf_p = (char *)buf;
	ch_word = (char)ch;
	while (n > 0)
	{
		*buf_p = ch_word;
		buf_p++;
		n--;
	}
	return (buf);
}
