/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:46:13 by tramet            #+#    #+#             */
/*   Updated: 2018/11/16 14:46:14 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		slen(char *str)
{
	return (*str ? slen(++str) + 1 : 1);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		s_id;

	if (!src)
		return (NULL);
	s_id = slen(src);
	dest = malloc(sizeof(*src) * s_id);
	while (--s_id >= 0)
	{
		dest[s_id] = src[s_id];
	}
	return (dest);
}
