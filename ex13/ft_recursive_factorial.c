/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:59:07 by tramet            #+#    #+#             */
/*   Updated: 2018/11/14 17:59:12 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 1)
	{
		if (!nb)
			return (1);
		return (0);
	}
	else if (nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
