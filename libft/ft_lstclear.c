/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:08:32 by maaliber          #+#    #+#             */
/*   Updated: 2022/11/11 14:38:15 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nnext;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nnext = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nnext;
	}
}
