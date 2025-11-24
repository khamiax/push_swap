/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_third.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:40:18 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/24 17:24:57 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ss(int *str_a, int *str_b)
{
	sa(str_a);
	sb(str_b);
	ft_printf("ss");
	return (1);
}

int	rr(int *str_a, int *str_b)
{
	ra(str_a);
	rb(str_b);
	ft_printf("rr");
	return (1);
}

int	rrr(int *str_a, int *str_b)
{
	rra(str_a);
	rrb(str_b);
	ft_printf("rrr");
	return (1);
}

int	ft_error(void)
{
	write(2, "Error\n", 6);
	return (0);
}
