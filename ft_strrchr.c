/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:18:08 by julberna          #+#    #+#             */
/*   Updated: 2023/05/04 15:03:44 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	size;

	size = ft_strlen(str);
	while (size >= 0)
	{
		if (str[size] == (char)c)
			return (&((char *)str)[size]);
		size--;
	}
	return (NULL);
}
