/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:36:06 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:20:32 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numdigit(int n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		digit = 1;
	}
	while (n > 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*str_origin;

	str = (char *)malloc(sizeof(char) * (ft_numdigit(n) + 1));
	if (str == NULL)
		return (NULL);
	str_origin = str;
	if (n < 0)
	{
		*str = '-';
		str++;
	}
	while (n > 0)
	{
		*str = (n % 10) + '0';
		str++;
		n /= 10;
	}
	*str = '\0';
	return (str_origin);
}
