/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:00:00 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/09 12:30:00 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(int *lst, int size, int value)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		if (lst[i] == value)
			return (i);
		i++;
	}
	return (1);
}

int	find_target_in_a(int *lst_a, int value)
{
	int	i;
	int	size;
	int	target;
	int	target_idx;

	size = lst_a[0];
	target = 2147483647;
	target_idx = 1;
	i = 1;
	while (i <= size)
	{
		if (lst_a[i] > value && lst_a[i] < target)
		{
			target = lst_a[i];
			target_idx = i;
		}
		i++;
	}
	if (target == 2147483647)
		target_idx = find_min_index(lst_a, size);
	return (target_idx);
}

int	calc_cost(int *lst_a, int *lst_b, int idx_b)
{
	int	cost;
	int	target_idx;
	int	size_a;
	int	size_b;

	size_a = lst_a[0];
	size_b = lst_b[0];
	cost = 0;
	target_idx = find_target_in_a(lst_a, lst_b[idx_b]);
	if (idx_b <= size_b / 2)
		cost += idx_b - 1;
	else
		cost += size_b - idx_b + 1;
	if (target_idx <= size_a / 2)
		cost += target_idx - 1;
	else
		cost += size_a - target_idx + 1;
	return (cost);
}

int	find_cheapest(int *lst_a, int *lst_b)
{
	int	i;
	int	size_b;
	int	min_cost;
	int	cost;
	int	cheapest;

	size_b = lst_b[0];
	min_cost = 2147483647;
	cheapest = 1;
	i = 1;
	while (i <= size_b)
	{
		cost = calc_cost(lst_a, lst_b, i);
		if (cost < min_cost)
		{
			min_cost = cost;
			cheapest = i;
		}
		i++;
	}
	return (cheapest);
}

void	rotate_to_pos(int *lst, int idx, int is_a)
{
	int	size;

	size = lst[0];
	if (idx <= size / 2)
	{
		while (idx > 1)
		{
			if (is_a)
				ra(lst);
			else
				rb(lst);
			idx--;
		}
	}
	else
	{
		while (idx <= size)
		{
			if (is_a)
				rra(lst);
			else
				rrb(lst);
			idx++;
		}
	}
}

void	execute_move(int *lst_a, int *lst_b, int idx_b)
{
	int	target_idx;

	target_idx = find_target_in_a(lst_a, lst_b[idx_b]);
	rotate_to_pos(lst_b, idx_b, 0);
	rotate_to_pos(lst_a, target_idx, 1);
	pa(lst_a, lst_b);
}