/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:36:29 by julberna          #+#    #+#             */
/*   Updated: 2023/05/25 16:44:03 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	last;

	if (lst == NULL)
		return (NULL);
	last = 1;
	while (lst->next != NULL)
	{
		last++;
		lst = lst->next;
	}
	return (lst);
}
