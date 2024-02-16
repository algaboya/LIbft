/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:47:29 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/15 20:29:32 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
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

// int	ft_let_count(char *s, char c)
// {
// 	int	let_count;

// 	let_count = 0;
// 	while (*s != c && *s)
// 		{
// 			let_count++;
// 			s++;
// 		}
// 	return (let_count);
// }

// char	**ft_ptr(int d_count)
// {
// 	char	**ptr;

// 	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
// 	if (!ptr)
// 		return (NULL);
// 	ptr[d_count] = NULL;
// 	return (ptr);
// }


char	**ft_split(char const *s, char c)
{
	int		i;
	int		let_count;
	int		d_count;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	let_count = 0;
	d_count = ft_word_count(s, c);
	// ptr = ft_ptr(d_count);
	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
	if (!ptr)
		return (NULL);
	ptr[d_count] = NULL;
	while (i < d_count)
	{
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
			let_count = 0;
		}
		s++;
	}
	return (ptr);
}
// char	**ft_ptr(int d_count)
// {
// 	char	**ptr;

// 	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
// 	if (!ptr)
// 		return (NULL);
// 	ptr[d_count] = NULL;
// 	return (ptr);
// }

