/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:10:38 by julberna          #+#    #+#             */
/*   Updated: 2023/05/18 17:31:55 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			temp[16384];
	unsigned char	*cache_src;
	unsigned char	*cache_dest;

	cache_dest = (unsigned char *)dest;
	cache_src = (unsigned char *)src;
	ft_memcpy(temp, cache_src, n);
	ft_memcpy(cache_dest, temp, n);
	return (cache_dest);
}
