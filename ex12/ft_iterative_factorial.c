/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:01:02 by tramet            #+#    #+#             */
/*   Updated: 2018/11/09 19:01:04 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	nb > -1 ? 0 : (nb = -1);
	if (nb < 0)
		return (0);
	result = 1;
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
