/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:52:23 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/09 21:15:12 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (haystack == 00 && len == 00)
		return (00);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (i + ft_strlen(needle)) <= len)
	{
		if (!(ft_strncmp((char *)(haystack + i), needle, ft_strlen(needle))))
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (haystack == 00 && len == 00)
// 		return (00);
// 	if (ft_strlen(needle) == 0 || haystack == needle)
// 		return ((char *)haystack);
// 	if (needle[j] == '\0')
// 	{
// 		return ((char *)haystack);
// 	}
// 	while (haystack[i] != '\0' && i < len)
// 	{
// 		while (haystack[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
// 			j++;
// 		if (needle[j] == '\0')
// 			return ((char *) haystack + i);
// 		i++;
// 		j = 0;
// 	}
// 	return (00);
// }
