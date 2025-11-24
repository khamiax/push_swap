/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:34:45 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/23 15:16:49 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		f(lst->content);
		tmp = lst->next;
		lst = tmp;
	}
}
// void f(void *c)
// {
// 	char *s = c;
// 	char *tmp = "0000000";
// 	int i = 0;

// 	while (s[i])
// 	{
// 		s[i] = tmp[i];
// 		i++;
// 	}
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew(ft_strdup("csdsdfsdf"));
// 	node2 = ft_lstnew(ft_strdup("csdsdfs"));
// 	node3 = ft_lstnew(ft_strdup("csdsd"));
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstiter(lst, f);

// 	while(lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }