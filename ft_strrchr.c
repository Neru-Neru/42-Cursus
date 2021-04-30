/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:16:35 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/30 14:35:18 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*ans;

	ans = 0;
	while (*str != '\0' || chr == 0)
	{
		if (*str == chr)
			ans = (char *) str;
		if (chr == 0)
			break ;
		str++;
	}
	return (ans);
}
