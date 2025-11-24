/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:07:29 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/23 15:16:55 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *node;
// 	t_list *tmp;

// 	node  = ft_lstnew("/100/");
// 	ft_lstadd_back(&node, ft_lstnew("/110/"));
// 	ft_lstadd_back(&node, ft_lstnew("/150/"));

// 	tmp = ft_lstlast(node);
// 	printf("last node : %s", (char *)tmp->content);
// 	return (0);
// }