/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:58:46 by edoll             #+#    #+#             */
/*   Updated: 2019/09/08 20:55:36 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **av, int i)
{
	char *tmp;

	tmp = av[i];
	av[i] = av[i + 1];
	av[i + 1] = tmp;
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 1;
		while (++i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(av, i);
				i = 0;
			}
		}
		i = 1;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
