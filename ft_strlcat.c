/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:28:30 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/04 12:53:38 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	k = 0;
	i = ft_strlen((char *)dst);
	j = ft_strlen((char *)src);
	while (i < dstsize - 1 && src[k])
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + (j - k));
}
