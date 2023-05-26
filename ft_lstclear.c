/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:19:23 by julberna          #+#    #+#             */
/*   Updated: 2023/05/26 15:38:25 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, del),
		*lst = buffer;
	}
	*lst = NULL;
}
