/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:42:08 by msaurel           #+#    #+#             */
/*   Updated: 2025/12/09 14:00:35 by marvin           ###   ########.fr       */
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
int		ft_error(void);
int		*make_stack(char **argv);
char	**verif_args(int argc, char **argv);
int		algo(int *lst_a);
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