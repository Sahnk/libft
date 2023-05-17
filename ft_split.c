/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:10:58 by julberna          #+#    #+#             */
/*   Updated: 2023/05/17 20:08:06 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
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
	int	s_words;
	char	**split;

	if (s == NULL || c == NULL)
		return (NULL);

	s_words = ft_wordcount(&s, c);

	*split = ft_calloc(s_words, sizeof)
}
