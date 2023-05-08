/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:09:42 by julberna          #+#    #+#             */
/*   Updated: 2023/05/08 20:11:14 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0 || nmemb == 0 || (nmemb * size) / nmemb != size)
		return (NULL);
	ptr = malloc(nmemb * size);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
