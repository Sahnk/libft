/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julberna <julberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:26:41 by julberna          #+#    #+#             */
/*   Updated: 2023/05/08 18:29:44 by julberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupe;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen((char *)s);
	dupe = malloc(slen + 1);
	ft_strlcpy(dupe, s, slen);
	dupe[i] = '\0';
	return (dupe);
}
