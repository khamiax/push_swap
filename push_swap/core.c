/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:16 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/26 16:02:08 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_max_min_verif(char *s)
{
	long	nb;

	nb = ft_atoi(s);
	if (nb > 2147483647 || nb < -2147483648)
		return (1);
	return (0);
}

int	args_verif(char **argv)
{
	int	i;
	int	j;

	if (!argv || !argv[0])
		return (0);
	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		if (!argv[i][j] || int_max_min_verif(argv[i]))
			return (0);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verif_dup(int *lst_a)
{
	int	i;
	int	j;
	int	s;

	s = lst_a[0];
	i = 1;
	while (i <= s)
	{
		j = i + 1;
		while (j <= s)
		{
			if (lst_a[i] == lst_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**ver_argv;
	int		*lst_a;

	if (argc < 2)
		return (0);
	ver_argv = verif_args(argc, argv);
	if (!ver_argv)
		return (ft_error());
	if (!args_verif(ver_argv))
	{
		free_split(ver_argv);
		return (ft_error());
	}
	lst_a = make_stack(ver_argv);
	if (!lst_a)
	{
		free_split(ver_argv);
		return (ft_error());
	}
	if (verif_dup(lst_a))
		return (free(lst_a), free_split(ver_argv), ft_error());
	algo(lst_a);
	free_split(ver_argv);
	free(lst_a);
	return (0);
}
