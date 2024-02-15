/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:12:51 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/09 21:09:35 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	nbr;
	char	buf[10];

	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
	}
	nbr = ft_abs(n);
	i = 10;
	while (nbr != 0 && i > 0)
	{
		i--;
		buf[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	write(fd, &buf[i], 10 - i);
}
