/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:32:47 by julberna          #+#    #+#             */
/*   Updated: 2023/05/09 17:17:47 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	negative;
	char	*str;

	i = 0;
	negative = 0;
	num = 0;
	str = (char *)nptr;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (negative % 2 != 0)
		num = -num;
	return (num);
}
