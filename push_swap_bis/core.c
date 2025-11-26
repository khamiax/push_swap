/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*   Created: 2025/11/24 15:48:16 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/26 01:00:00 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strilen(int *a)
{
	if (!a)
		return (0);
	return (a[0]);
}

int	ft_error(void)
{
	write(2, "Error\n", 6);
	return (0);
}

/* ---------- Overflow ---------- */

int	int_max_min_verif(char *s)
{
	long	nb;

	nb = ft_atol(s);
	if (nb > 2147483647 || nb < -2147483648)
		return (1);
	return (0);
}

/* ---------- Tokens ---------- */

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
			if (!ft_isdigit((int)argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* ---------- Duplicates ---------- */

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

/* ---------- Convert Tokens ---------- */

int	*make_stack(char **argv)
{
	int	*lst_a;
	int	n;
	int	i;

	n = 0;
	while (argv[n])
		n++;
	lst_a = malloc(sizeof(int) * (n + 1));
	if (!lst_a)
		return (NULL);
	lst_a[0] = n;
	i = 1;
	while (i <= n)
	{
		lst_a[i] = ft_atoi(argv[i - 1]);
		i++;
	}
	return (lst_a);
}

/* ---------- Build Tokens ---------- */

char	**verif_args(int argc, char **argv)
{
	char	**ver_argv;
	int		i;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	ver_argv = malloc(sizeof(char *) * argc);
	if (!ver_argv)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ver_argv[i - 1] = ft_strdup(argv[i]);
		i++;
	}
	ver_argv[argc - 1] = NULL;
	return (ver_argv);
}

/* ---------- need_rename ---------- */

int	inter_algo(int *lst_a, int size)
{
	int	i;
	int	min_idx;
	int	count;

	if (size <= 0)
		return (0);
	min_idx = 1;
	i = 2;
	while (i <= size)
	{
		if (lst_a[i] < lst_a[min_idx])
			min_idx = i;
		i++;
	}
	count = 0;
	while (min_idx-- > 1)
		count += ra(lst_a);
	return (count);
}



int	algo(int *lst_a)
{
	int	*b;
	int	size;
	int	i;
	int	count;

	size = ft_strilen(lst_a);
	b = malloc(sizeof(int) * (size + 1));
	if (!b)
		return (ft_error());
	b[0] = 0;
	i = 0;
	count = 0;
	while (i < size)
	{
		count += inter_algo(lst_a, size - i);
		count += pb(lst_a, b);
		i++;
	}
	while (i-- > 0)
		count += pa(lst_a, b);
	free(b);
	return (count);
}



/* ---------- MAIN ---------- */

int	main(int argc, char **argv)
{
	char	**ver_argv;
	int		*lst_a;

	if (argc < 2)
		return (0);
	ver_argv = verif_args(argc, argv);
	if (!ver_argv || !args_verif(ver_argv))
		return (ft_error());
	lst_a = make_stack(ver_argv);
	ft_free_split(ver_argv);
	if (!lst_a)
		return (ft_error());
	if (verif_dup(lst_a))
		return (ft_error());
    algo(lst_a);
	free(lst_a);
	return (0);
}
