/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:16 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/10 12:39:29 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_max_min_verif(char *s)
{
	long long	nb;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		if ((sign == 1 && nb > 2147483647)
			|| (sign == -1 && nb > 2147483648))
			return (1);
		i++;
	}
	return (0);
}

int	args_verif(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] == ' ' || (argv[i][j] >= 9 && argv[i][j] <= 13))
			j++;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		if (!argv[i][j])
			return (0);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		if (int_max_min_verif(argv[i]))
			return (0);
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

void	cleanup_and_exit(char **ver_argv, int *lst_a, int error)
{
	if (ver_argv)
		free_split(ver_argv);
	if (lst_a)
		free(lst_a);
	if (error)
		ft_error();
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
