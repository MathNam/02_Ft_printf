/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:02:26 by maaliber          #+#    #+#             */
/*   Updated: 2022/11/10 16:02:27 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	l_src;
	size_t	i;

	l_src = ft_strlen(src);
	i = 0;
	cpy = (char *)malloc((l_src + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (i < l_src)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
