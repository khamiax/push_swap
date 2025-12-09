/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:45 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/09 13:58:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(int *str_a)
{
	int	tmp;

	if (str_a[0] < 2)
		return (0);
	tmp = str_a[1];
	str_a[1] = str_a[2];
	str_a[2] = tmp;
	ft_printf("sa\n");
	return (1);
}

int	sb(int *str_b)
{
	int	tmp;

	if (str_b[0] < 2)
		return (0);
	tmp = str_b[1];
	str_b[1] = str_b[2];
	str_b[2] = tmp;
	ft_printf("sb\n");
	return (1);
}

int	pa(int *str_a, int *str_b)
{
	int	i;

	if (str_b[0] == 0)
		return (0);
	i = str_a[0] + 1;
	while (i > 1)
	{
		str_a[i] = str_a[i - 1];
		i--;
	}
	str_a[1] = str_b[1];
	i = 1;
	while (i < str_b[0])
	{
		str_b[i] = str_b[i + 1];
		i++;
	}
	str_a[0]++;
	str_b[0]--;
	ft_printf("pa\n");
	return (1);
}

int	pb(int *str_a, int *str_b)
{
	int	i;

	if (str_a[0] == 0)
		return (0);
	i = str_b[0] + 1;
	while (i > 1)
	{
		str_b[i] = str_b[i - 1];
		i--;
	}
	str_b[1] = str_a[1];
	i = 1;
	while (i < str_a[0])
	{
		str_a[i] = str_a[i + 1];
		i++;
	}
	str_b[0]++;
	str_a[0]--;
	ft_printf("pb\n");
	return (1);
}

int	ra(int *str_a)
{
	int	i;
	int	first;
	int	size;

	size = str_a[0];
	if (size <= 1)
		return (0);
	first = str_a[1];
	i = 1;
	while (i < size)
	{
		str_a[i] = str_a[i + 1];
		i++;
	}
	str_a[size] = first;
	ft_printf("ra\n");
	return (1);
}