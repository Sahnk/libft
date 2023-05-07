/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:04:00 by julberna          #+#    #+#             */
/*   Updated: 2023/05/06 22:08:24 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cache_dest;
	unsigned char	*cache_src;

	i = 0;
	cache_dest = (unsigned char *)dest;
	cache_src = (unsigned char *)src;
	while (i < n)
	{
		cache_dest[i] = cache_src[i];
		i++;
	}
	return (cache_dest);
}
