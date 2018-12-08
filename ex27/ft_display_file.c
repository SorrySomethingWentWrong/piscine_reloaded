/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 03:32:45 by tramet            #+#    #+#             */
/*   Updated: 2018/12/04 03:32:48 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		slen(char *s)
{
	return (*s ? slen(++s) + 1 : 0);
}

int		main(int ac, char const *av[])
{
	int		fd;
	int		size;
	char	data[128];

	size = 0;
	if (ac != 2)
	{
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (!(fd = open(av[1], O_RDONLY)))
		return (1);
	while ((size = read(fd, data, 128)) > 0)
		write(1, data, size);
	while (!close(fd))
		;
	return (0);
}
