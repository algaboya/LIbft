#include "libft.h"

int	main()
{
	char *abl = "lal";
	char *ablul = "la32l";

	t_list *head;
	t_list *node1 = (t_list*)malloc(sizeof(t_list));
	t_list *node2 = (t_list*)malloc(sizeof(t_list));
	head = node1;
	node1->content = (void *)abl;
	node1->next = node2;
	node2->content = (void *)ablul;
	node2->next = NULL;

	printf("%s\n", node1->content);
	printf("%s\n", node1->next->content);

}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaboya <algaboya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:47:29 by algaboya          #+#    #+#             */
/*   Updated: 2024/02/12 20:13:42 by algaboya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		d_count;
	int		let_count;
	char	**ptr;
	int		k;

	i = 0;
	k = 0;
	d_count = 0;
	let_count = 0;
	// if (!*s)
	// {
	// 	ptr = (char **)malloc(sizeof(char *) * 1);
	// 	*ptr = NULL;
	// 	return (ptr);
	// }
	// if (s[i] != c)
	// 	i++;
	while (s[i] != '\0')
	{
		// if ((s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		// 	|| (s[i] == c && s[i] == '\0'))
		// 	d_count++;
		// i++;
		if (s[i] != c)
		{

			while (s[i] != c && s[i + 1] != '\0')
		 		i++;
			d_count++; // barer
		}
		i++;
	}
	printf("%d\n", d_count);

	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s != '\0' && i < d_count)
	{
		while (*s != c)
		{
			let_count++;
			s++;
		}
		if (let_count != 0)
		{
			ptr[i] = (char *)malloc(sizeof(char) * (let_count + 1));
			if (!ptr[i])
				return (NULL);
			ft_strlcpy(ptr[i], s - let_count, let_count + 1);
			i++;
			let_count = 0;
		}
		// 	ptr[i] = ft_substr(s, k + let_count, let_count);
		// 	i++;
		// 	if(!ptr[i])
		// 	{
		// 		while (i >= 0)
		// 		{
		// 			free(ptr[i]);
		// 			i++;
		// 		}
		// 		free(ptr);
		// 		return (NULL);
		// 	}
		// }
		s++;
	}
	if ()
		ptr[d_count] = NULL;
	return (ptr);
}


// int main(void)
// {
// 	//char *s = "aaaaaa";
// 	      //    01234567891 
// 	ft_split("a dfb", ' ');
// 	// s = strdup("--1-2--3---4----5-----42");
// 	// char **result = ft_split(s, '-');
// 	// while (*result != NULL)
// 	// {
// 	// 	printf("%s \n",*result);
// 	// 	*result++;
// 	// }
// 	return (0);
// }

char	**ft_split(char const *s, char c)
{
	int		i;
	int		d_count;
	int		let_count;
	char	**ptr;
	int		k;

	i = 0;
	k = 0;
	d_count = 0;
	let_count = 0;
	// if (!*s)
	// {
	// 	ptr = (char **)malloc(sizeof(char *) * 1);
	// 	*ptr = NULL;
	// 	return (ptr);
	// }
	while (s[i] != '\0')
	{

		if (s[i] != c)
		{
			while (s[i] != c && s[i + 1] != '\0')
				i++;
			d_count++;
		}
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (d_count + 1));
	if (!ptr)
		return (NULL);
	ptr[d_count] = NULL;
	i = 0;
	while (*s != '\0' && i < d_count)
	{
		while (*s != c)
		{
			let_count++;
			s++;
		}
		if (let_count != 0)
		{
			ptr[i] = (char *)malloc(sizeof(char) * (let_count + 1));
			if (!ptr[i])
				return (NULL);
			ft_strlcpy(ptr[i], s - let_count, let_count + 1);
			i++;
			let_count = 0;
		}
		s++;
	}
	return (ptr);
}

// int main(void)
// {
// 	//char *s = "aaaaaa";
// 	char **result = ft_split("     ", ' ');
// 	// s = strdup("--1-2--3---4----5-----42");
// 	// char **result = ft_split(s, '-');
// 	while (*result != NULL)
// 	{
// 		printf("%s \n",*result);
// 		*result++;
// 	}
// 	return (0);
// }
