/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:48 by julberna          #+#    #+#             */
/*   Updated: 2023/05/06 22:50:51 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (&((char *)big)[i - j]);
			else if (big[i] != little[j])
				j = 0;
		}
		else
		{
			i++;
		}
	}	
	return (NULL);
}
