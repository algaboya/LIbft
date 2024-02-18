/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:33:49 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/08 20:29:49 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		k;
	long	nbr;
	char	*ptr;

	k = ft_count(n);
	nbr = ft_abs(n);
	ptr = (char *)malloc(sizeof(char) * (k + 1));
	if (!ptr)
		return (NULL);
	ptr[k] = '\0';
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (n < 0)
		ptr[0] = '-';
	while (nbr != 0)
	{
		k--;
		*(ptr + k) = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
