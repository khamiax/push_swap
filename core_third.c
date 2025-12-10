/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_third.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:13:13 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/10 12:40:40 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_to_min(int *lst_a, int idx, int size)
{
	if (idx <= (size + 1) / 2)
	{
		while (idx > 1)
		{
			ra(lst_a);
			idx--;
		}
	}
	else
	{
		while (idx <= size)
		{
			rra(lst_a);
			idx++;
		}
	}
}

void	push_min_to_b(int *lst_a, int *lst_b)
{
	int	idx;
	int	size;

	size = lst_a[0];
	idx = find_min_index(lst_a, size);
	rotate_to_min(lst_a, idx, size);
	pb(lst_a, lst_b);
}

void	sort_five(int *lst_a, int *lst_b)
{
	push_min_to_b(lst_a, lst_b);
	push_min_to_b(lst_a, lst_b);
	sort_three(lst_a);
	pa(lst_a, lst_b);
	pa(lst_a, lst_b);
}

void	algo_inter(int *lst_a, int *lst_b, int size)
{
	if (size <= 5)
		sort_five(lst_a, lst_b);
	else
	{
		while (lst_a[0] > 3)
			push_min_to_b(lst_a, lst_b);
		sort_three(lst_a);
		while (lst_b[0] > 0)
			pa(lst_a, lst_b);
	}
}

int	algo(int *lst_a)
{
	int	*lst_b;
	int	size;

	size = lst_a[0];
	if (is_sorted(lst_a))
		return (0);
	if (size == 2)
	{
		sa(lst_a);
		return (1);
	}
	if (size == 3)
	{
		sort_three(lst_a);
		return (1);
	}
	lst_b = malloc(sizeof(int) * (size + 1));
	if (!lst_b)
		return (ft_error());
	lst_b[0] = 0;
	algo_inter(lst_a, lst_b, size);
	free(lst_b);
	return (1);
}
