/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:16:04 by julberna          #+#    #+#             */
/*   Updated: 2023/05/06 21:34:34 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cache_str;

	i = 0;
	cache_str = (unsigned char *)s;
	while (i < n)
	{
		cache_str[i] = '\0';
		i++;
	}
}
