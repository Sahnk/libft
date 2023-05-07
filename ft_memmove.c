/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:10:38 by julberna          #+#    #+#             */
/*   Updated: 2023/05/06 22:13:55 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			src_len;
	char			temp[100];
	unsigned char	*cache_src;
	unsigned char	*cache_dest;

	i = 0;
	src_len = 0;
	cache_dest = (unsigned char *)dest;
	cache_src = (unsigned char *)src;
	while (cache_src[i] != '\0')
	{
		temp[i] = cache_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cache_dest[i] = temp[i];
		i++;
	}
	return (cache_dest);
}
