/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_bis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:38:07 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/10 12:27:41 by msaurel          ###   ########.fr       */
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

	if (!argv || !argv[0])
		return (NULL);
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

int	is_sorted(int *lst_a)
{
	int	i;
	int	size;

	size = lst_a[0];
	i = 1;
	while (i < size)
	{
		if (lst_a[i] > lst_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	sort_three(int *lst_a)
{
	int	a;
	int	b;
	int	c;

	if (is_sorted(lst_a))
		return ;
	a = lst_a[1];
	b = lst_a[2];
	c = lst_a[3];
	if (a > b && b < c && a < c)
		sa(lst_a);
	else if (a > b && b > c)
	{
		sa(lst_a);
		rra(lst_a);
	}
	else if (a > b && b < c && a > c)
		ra(lst_a);
	else if (a < b && b > c && a < c)
	{
		sa(lst_a);
		ra(lst_a);
	}
	else if (a < b && b > c && a > c)
		rra(lst_a);
}

int	find_min_index(int *lst, int size)
{
	int	i;
	int	min;
	int	idx;

	min = 2147483647;
	i = 1;
	idx = 1;
	while (i <= size)
	{
		if (lst[i] < min)
		{
			min = lst[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}
