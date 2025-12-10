/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_third.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:40:18 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/10 14:05:45 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ss(int *str_a, int *str_b)
{
	sa(str_a);
	sb(str_b);
	ft_printf("ss\n");
	return (1);
}

int	rr(int *str_a, int *str_b)
{
	ra(str_a);
	rb(str_b);
	ft_printf("rr\n");
	return (1);
}

int	rrr(int *str_a, int *str_b)
{
	rra(str_a);
	rrb(str_b);
	ft_printf("rrr\n");
	return (1);
}

int	ft_error(void)
{
	write(2, "Error\n", 7);
	return (0);
}

void	free_split(char **argv)
{
	int	i;

	i = 0;
	if (!argv)
		return ;
	while (argv[i])
	{
		free (argv[i]);
		i++;
	}
	free (argv);
}
