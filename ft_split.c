/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:10:58 by julberna          #+#    #+#             */
/*   Updated: 2023/05/23 19:11:53 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int	i;
	int	words;
	int	old_i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break;
			i++;
		}
		old_i = i;
		while (s[i] != '\0')
		{
			if (ft_strchr(&c, s[i]) != NULL)
				break;
			i++;
		}
		if (i > old_i)
			words++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	buffer[16384];
	char	**split;
	size_t	string_index;
	size_t	word_count;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);

	word_count = ft_wordcount((char *)s, c);
	split = (char **)ft_calloc((word_count + 1), sizeof(char *));	
	i = 0;
	string_index = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break;
			i++;
		}
		j = 0;
		while (s[i] != '\0')
		{
			if (ft_strchr(&c, s[i]) != NULL)
				break;
			buffer[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			split[string_index] = malloc (sizeof(char) * (ft_strlen(buffer) + 1));
			ft_strlcpy(split[string_index], buffer, ft_strlen(buffer) + 1);
			string_index++;
		}
	}
	return (split);
}
