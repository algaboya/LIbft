/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:47:38 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/04 12:50:42 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = len - 1;
	if (!src && !dst)
		return (0);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest < source)
		ft_memcpy(dest, source, len);
	else
	{
		while (i < len)
		{
			*(dest + i) = *(source + i);
			i--;
		}
	}
	return (dest);
}
