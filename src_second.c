/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_second.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:35:18 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/26 15:51:41 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rb(int *str_b)
{
	int	i;
	int	first;
	int	size;

	size = str_b[0];
	if (size <= 1)
		return (0);
	first = str_b[1];
	i = 1;
	while (i < size)
	{
		str_b[i] = str_b[i + 1];
		i++;
	}
	str_b[size] = first;
	ft_printf("ra\n");
	return (1);
}

int	rrb(int *str_b)
{
	int	i;
	int	k;

	i = 0;
	while (str_b[i])
		i++;
	k = str_b[i];
	while (i != 0)
	{
		str_b[i] = str_b[i - 1];
		i--;
	}
	str_b[0] = k;
	ft_printf("rrb\n");
	return (1);
}

int	rra(int *str_a)
{
	int	size;
	int	i;
	int	last;

	size = str_a[0];
	if (size <= 1)
		return (0);
	last = str_a[size];
	i = size;
	while (i > 1)
	{
		str_a[i] = str_a[i - 1];
		i--;
	}
	str_a[1] = last;
	ft_printf("rra\n");
	return (1);
}

int	ft_strilen(int *str_a)
{
	int	i;

	i = 0;
	if (!str_a)
		return (0);
	return (str_a[0]);
}
