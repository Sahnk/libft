/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:19:15 by julberna          #+#    #+#             */
/*   Updated: 2023/05/26 00:44:06 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*buffer;
	t_list	*ptr;

	ptr = &(*lst);
	map = NULL;
	while (ptr)
	{
		buffer = ft_lstnew(f(ptr->content));
		if (!buffer)
			ft_lstdelone(buffer, del);
		else
			ft_lstadd_back(&map, buffer);
		ptr = ptr->next;
	}
	return (map);
}
