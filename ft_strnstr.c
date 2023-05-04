/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:48 by julberna          #+#    #+#             */
/*   Updated: 2023/05/04 18:28:12 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (&big[i - j]);
			else if (big[i] != little[j])
				j = 0;
		}
		else
		{
			i++;
		}
	}	
	return (0);
}