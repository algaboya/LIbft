/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:27:45 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/11 20:40:52 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	foo(char s, const char *s1)
{
	while (*s1)
	{
		if (*s1 == s)
			return (19);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (foo(s1[i], set))
		i++;
	while (foo(s1[j], set) && j > i)
		j--;
	ptr = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, j - i + 2);
	return (ptr);
}

// int main()
// {
//     char *s1 = "Hello oo olla";
//     char *set = "HJla";
//     printf("%s", ft_strtrim(s1, set));
//     return (0);
// }

// int main()
// {
// 	char *s1 = "Hello oo olla";
// 	char *set = "HJla";
// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }
