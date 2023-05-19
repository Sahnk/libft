/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:10:58 by julberna          #+#    #+#             */
/*   Updated: 2023/05/18 21:42:23 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int	words;
	char	**split;
	char	buffer[16384];
	int	string_index;
	int	i;
	int	j;
	int	old_i;

	if (s == NULL || c == NULL)
		return (NULL);

//	s_words = ft_wordcount(&s, c);

//	*split = ft_calloc(s_words, sizeof(char*));
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (ft_strchr(c, s[i]) == NULL)
				break;
			i++;
		}
		old_i = i;
		while (s[i] != '\0')
		{
			if (ft_strchr(c, s[i]) != NULL)
				break;
			i++;
		}
		if (i > old_i)
			words++;
	}
	i = 0;
	string_index = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (ft_strchr(c, s[i]) == NULL)
				break;
			i++;
		}
		j = 0;
		while (s[i] != '\0')
		{
			if (ft_strchr(c, s[i]) != NULL)
				break;
			buffer[j] = s[i];
			i++;
			j++;
		}
		buffer[j] = '\0';
		int	to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
		split[string_index] = malloc (to_allocate);
		ft_strcpy()
	}
}
