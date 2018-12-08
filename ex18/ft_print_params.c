/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:26:08 by tramet            #+#    #+#             */
/*   Updated: 2018/11/15 12:26:11 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		i_ac;
	int		index;

	if (argc == 1)
		return (1);
	i_ac = 1;
	while (i_ac < argc)
	{
		index = 0;
		while (argv[i_ac][index])
		{
			ft_putchar(argv[i_ac][index]);
			index++;
		}
		i_ac++;
		ft_putchar('\n');
	}
	return (0);
}
