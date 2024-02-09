/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:05:04 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/03 12:24:45 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	while (i < n)
	{
		if (*(char *)s == c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
