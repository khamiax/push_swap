/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:42:08 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/26 15:50:12 by msaurel          ###   ########.fr       */
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
int		up_and_down(int *lst_a, int size, int count, int idx);
char	**verif_args(int argc, char **argv);
int		inter_algo(int *lst_a, int size);
int		algo(int *lst_a);
int		int_max_min_verif(char *s);
void	free_split(char **argv);
int		args_verif(char **argv);
int		verif_dup(int *lst_a);

#endif