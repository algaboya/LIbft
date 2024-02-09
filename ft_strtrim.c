/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:27:45 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/06 20:33:15 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	foo(char *s1, char set)
{
	if (!s1)
		return (0);
	while (*s1)
	{
		if (*s1 == set)
		{
			s1++;
			return (19);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1);
	k = ft_strlen(s1) - i - j;
	if (!s1)
		return (NULL);
	while (foo((s1[i], set)))
		i++;
	while (foo((s1[j - 1], set && j >= 0)))
		j--;
	ptr = (char)malloc(sizeof(char) * (k - 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, k);
	return (ptr);
}
