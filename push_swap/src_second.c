/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_second.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:35:18 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/24 16:34:13 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	rb(int *str_b)
{
	int	i;
	int	k;

	i = 0;
	k = str_b[0];
	while (str_b[i - 1])
	{
		str_b[i] = str_b[i + 1];
		i++;
	}
	str_b[i] = k;
	ft_printf("rb");
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
	ft_printf("rrb");
	return (1);
}

int	rra(int *str_a)
{
	int	i;
	int	k;

	i = 0;
	while (str_a[i])
		i++;
	k = str_a[i];
	while (i != 0)
	{
		str_a[i] = str_a[i - 1];
		i--;
	}
	str_a[0] = k;
	ft_printf("rra");
	return (1);
}

int	ft_strilen(int *str_a)
{
	int	i;

	i = 0;
	while (str_a[i])
		i++;
	return (i);
}
