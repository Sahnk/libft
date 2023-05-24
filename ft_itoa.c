/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:34:48 by julberna          #+#    #+#             */
/*   Updated: 2023/05/23 21:19:32 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_count_bytes(long int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	ft_write_numbers(char *str, long int ln, int bytes)
{
		if (ln < 0)
		{
			str[0] = '-';
			ln = -ln;
		}
		while (ln > 0)
		{
			str[bytes] = (ln % 10) + 48;
			ln /= 10;
			bytes--;
		}
}

char	*ft_itoa(int n)
{
	int			bytes;
	long int	ln;
	char		*str;

	ln = n;
	bytes = ft_count_bytes(ln);
	if (ln == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = '0';
	}
	else
	{
		str = ft_calloc(bytes + 1, sizeof(char));
		bytes--;
		ft_write_numbers(str, ln, bytes);
	}
	if (!str)
		return (NULL);
	return (str);
}
