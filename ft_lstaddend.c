/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 02:22:23 by rfabre            #+#    #+#             */
/*   Updated: 2017/03/08 03:23:59 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddend(t_list **alst, t_list *new)
{
	if ((*alst)->		next != NULL)
		ft_lstaddend(&(*alst)->next, new);
	else
	{
		(*alst)->next = new;
	}
}
