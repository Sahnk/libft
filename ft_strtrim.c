/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:16:38 by julberna          #+#    #+#             */
/*   Updated: 2023/05/15 21:31:02 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	
	size = ft_strlen(s1) - 1;

	while (ft_strchr(set, s1[size]) && size)
		size--;

	return (ft_substr(s1, 0, size + 1));
}
