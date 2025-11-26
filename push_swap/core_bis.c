/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_bis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:38:07 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/26 16:21:32 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_stack(char **argv)
{
	int	*lst_a;
	int	n;
	int	i;

	n = 0;
	while (argv[n])
		n++;
	lst_a = malloc(sizeof(int) * (n + 1));
	if (!lst_a)
		return (NULL);
	lst_a[0] = n;
	i = 1;
	while (i <= n)
	{
		lst_a[i] = ft_atoi(argv[i - 1]);
		i++;
	}
	return (lst_a);
}

char	**verif_args(int argc, char **argv)
{
	char	**ver_argv;
	int		i;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	ver_argv = malloc(sizeof(char *) * argc);
	if (!ver_argv)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ver_argv[i - 1] = ft_strdup(argv[i]);
		i++;
	}
	ver_argv[argc - 1] = NULL;
	return (ver_argv);
}

int	up_and_down(int *lst_a, int size, int count, int idx)
{
	if (idx <= size / 2)
	{
		while (idx > 1)
		{
			count += ra(lst_a);
			idx--;
		}
	}
	else
	{
		while (idx <= size)
		{
			count += rra(lst_a);
			idx++;
		}
	}
	return (count);
}


int	inter_algo(int *lst_a, int size)
{
	int	i;
	int	min;
	int	count;
	int	idx;

	count = 0;
	if (size <= 0)
		return (0);
	min = 2147483647;
	i = 1;
	while (i <= size)
	{
		if (lst_a[i] < min)
		{
			min = lst_a[i];
			idx = i;
		}
		i++;
	}
	count += up_and_down(lst_a, size, count, idx);
	return (count);
}

int	algo(int *lst_a)
{
	int	*b;
	int	size;
	int	i;
	int	count;

	size = ft_strilen(lst_a);
	b = malloc(sizeof(int) * (size + 1));
	if (!b)
		return (ft_error());
	b[0] = 0;
	i = 0;
	count = 0;
	while (i < size)
	{
		count += inter_algo(lst_a, size - i);
		count += pb(lst_a, b);
		i++;
	}
	while (i-- > 0)
		count += pa(lst_a, b);
	free(b);
	return (count);
}
