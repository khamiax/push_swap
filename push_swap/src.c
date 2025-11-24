/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:45 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/24 18:01:38 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	sa(int *str_a)
{
	int	i;

	i = 0;
	i = str_a[0];
	str_a[0] = str_a[1];
	str_a[1] = i;
	ft_printf("sa");
	return (1);
}

int	sb(int *str_b)
{
	int	i;

	i = 0;
	i = str_b[0];
	str_b[0] = str_b[1];
	str_b[1] = i;
	ft_printf("sb");
	return (1);
}

int	pa(int *str_a, int *str_b)
{
	str_a[0] = str_b[0];
	ft_printf("pa");
	return (1);
}

int	pb(int *str_a, int *str_b)
{
	str_b[0] = str_a[0];
	ft_printf("pb");
	return (1);
}

int	ra(int *str_a)
{
	int	i;
	int	k;

	i = 0;
	k = str_a[0];
	while (str_a[i - 1])
	{
		str_a[i] = str_a[i + 1];
		i++;
	}
	str_a[i] = k;
	ft_printf("ra");
	return (1);
}
