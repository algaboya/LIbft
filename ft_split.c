/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:47:29 by algaboya          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/17 17:01:27 by algaboya         ###   ########.fr       */
=======
/*   Updated: 2024/02/15 20:29:32 by algaboya         ###   ########.fr       */
>>>>>>> e7c55ab539642ada49b79776e5edabcdf27b8999
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int		i;
	int		d_count;

	i = 0;
	d_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i + 1])
				i++;
			d_count++;
		}
		i++;
	}
	return (d_count);
}

static char    **ft_ptrptr(char *s, char **ptr, char c)
{
    int i;
    int let_count;
    int d_count;
    
    i = 0;
    d_count = ft_word_count(s, c);
    while (i < d_count)
	{
	    let_count = 0;
		while (*s != c && *s)
		{
			let_count++;
			s++;
		}
		if (let_count != 0)
		{
			ptr[i] = (char *)malloc(sizeof(char) * (let_count + 1));
			ft_strlcpy(ptr[i], s - let_count, let_count + 1);
			i++;
		}
		s++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		d_count;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	d_count = ft_word_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
	if (!ptr)
		return (NULL);
	ptr[d_count] = NULL;
	return (ft_ptrptr(s, ptr, c));
}
