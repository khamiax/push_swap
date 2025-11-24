/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:03:23 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/23 15:19:37 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (lst)
	{
		tmp = lst->next;
		lst = tmp;
		i++;
	}
	return (i);
}
// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew("..1..");
// 	node2 = ft_lstnew("..2..");
// 	node3 = ft_lstnew("..3..");
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	printf("nb de node = %d\n", ft_lstsize(lst));
// 	// while(lst)
// 	// {
// 	// 	printf("%s\n", (char *)lst->content);
// 	// 	lst = lst->next;
// 	// }
// 	return (0);
// }