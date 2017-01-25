/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:23:49 by rfabre            #+#    #+#             */
/*   Updated: 2016/12/06 19:52:39 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*csrc;
	char		*cdst;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = -1;
	if (csrc < cdst)
		while ((int)--len >= 0)
			cdst[len] = csrc[len];
	else
		while (++i < len)
			*(cdst + i) = *((unsigned char *)(csrc + i));
	return (cdst);
}
