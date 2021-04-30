/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadachi <yadachi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:59:18 by yadachi           #+#    #+#             */
/*   Updated: 2021/04/26 17:19:57 by yadachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	while (n > 0)
	{
		nbr = n % 10 + '0';
		write(fd, &nbr, 1);
		n /= 10;
	}
	nbr = n + '0';
	write(fd, &nbr, 1);
}