/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:16 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/24 18:03:43 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	need_rename(int *str_a)
{
	int	i;
	int	min;
	int	ind;
	int	c;

	c = 0;
	min = 2147483647;
	i = 0;
	while (str_a[i])
	{
		if (str_a[i] <= min)
		{
			ind = i;
			min = str_a[i];
		}
		i++;
	}
	i = 0;
	while (i != ind)
	{
		c = ra(str_a);
		i++;
	}
	return (c);
}

int	need_rename_2(int *str_a)
{
	int	*str_b;
	int	i;
	int	c;
	int	n;

	c = 0;
	n = 0;
	i = ft_strilen(str_a);
	str_b = malloc (sizeof(int) * i);
	while (n != i)
	{
		c += need_rename(str_a);
		c += pb(str_a, str_b);
		n++;
	}
	while (n != 0)
	{
		c += pa(str_a, str_b);
		n--;
	}
	return (c);
}

int	*inter_main(int *str_a, int argc, char **argv)
{
	int	i;
	int	n;

	n = argc;
	i = 0;
	while (i != argc || n != 1)
	{
		if (!ft_isdigit(argv[n]))
		{
			ft_error();
			return (0);
		}
		str_a[i++] = ft_atoi(argv[n--]);
	}
	return (str_a);
}

int	main(int argc, char **argv)
{
	int	*str_a;

	if (argc == 1)
		return (0);
	if (argc > 2)
	{
		str_a = malloc (sizeof(int) * argc - 1);
		str_a = inter_main(str_a, argc, argv);
	}
	if (argc == 2)
	{
		argv = ft_split(argv[2], ' ');
		str_a = inter_main(str_a, argc, argv);
	}
	free(str_a);
	return (0);
}
