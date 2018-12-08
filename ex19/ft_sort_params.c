/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:44:40 by tramet            #+#    #+#             */
/*   Updated: 2018/11/15 12:44:41 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		scmp(char *s1, char *s2)
{
	if (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	else
		return (0);
	return (scmp(++s1, ++s2));
}

void	swap_s_ptrs(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int		slen(char *s)
{
	return (*s ? slen(++s) + 1 : 0);
}

void	print_args(int ac, char *av[])
{
	int		index;

	index = 1;
	while (index < ac)
	{
		while (*av[index])
		{
			ft_putchar(*av[index]);
			av[index]++;
		}
		ft_putchar('\n');
		index++;
	}
}

int		main(int ac, char *av[])
{
	int		index;
	int		s_id;

	index = ac - 1;
	s_id = 1;
	while (index > 1)
	{
		s_id = 1;
		while (s_id < index)
		{
			if (scmp(av[s_id], av[s_id + 1]) > 0)
			{
				swap_s_ptrs(&av[s_id], &av[s_id + 1]);
			}
			s_id++;
		}
		index--;
	}
	print_args(ac, av);
	return (0);
}
