/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:50:28 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/04 20:32:18 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		rev;
	char	*p;

	p = (char *)s;
	rev = ft_strlen(s);
	if (c == '\0')
		return (p + rev);
	while (rev >= 0)
	{
		if (*(p + rev) == (unsigned char)c)
			return (p + rev);
		rev--;
	}
	return (NULL);
}
