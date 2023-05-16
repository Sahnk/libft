/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:10:58 by julberna          #+#    #+#             */
/*   Updated: 2023/05/16 20:58:45 by julberna         ###   ########.fr       */
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

	if (s == NULL || c == NULL)
		return (NULL);

	s_words = ft_wordcount(&s, c);

	char	*split[s_words];
	while (s*)
	{
		while (s* == c)
			s++;
		if 
	}
}
