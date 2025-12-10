/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:42:08 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/10 12:41:37 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int		rra(int *str_a);
int		rrb(int *str_b);
int		ra(int *str_a);
int		rb(int *str_b);
int		sa(int *str_a);
int		sb(int *str_b);
int		pa(int *str_a, int *str_b);
int		pb(int *str_a, int *str_b);
int		rrr(int *str_a, int *str_b);
int		rr(int *str_a, int *str_b);
int		ss(int *str_a, int *str_b);
int		ft_strilen(int *str_a);
void	push_min_to_b(int *lst_a, int *lst_b);
void	sort_five(int *lst_a, int *lst_b);
int		ft_error(void);
void	rotate_to_min(int *lst_a, int idx, int size);
int		*make_stack(char **argv);
char	**verif_args(int argc, char **argv);
void	algo_inter(int *lst_a, int *lst_b, int size);
int		algo(int *lst_a);
void	cleanup_and_exit(char **ver_argv, int *lst_a, int error);
int		int_max_min_verif(char *s);
void	free_split(char **argv);
int		args_verif(char **argv);
int		verif_dup(int *lst_a);
int		is_sorted(int *lst_a);
void	sort_three(int *lst_a);
void	sort_five(int *lst_a, int *lst_b);
int		find_min_index(int *lst, int size);
void	push_min_to_b(int *lst_a, int *lst_b);

#endif