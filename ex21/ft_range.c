/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:35:04 by tramet            #+#    #+#             */
/*   Updated: 2018/11/17 11:35:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		index;

	if (max <= min)
		return (NULL);
	index = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(tab + index) = min;
		min++;
		index++;
	}
	return (tab);
}
