/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:37:00 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/23 15:17:07 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*inter;
	t_list	*nod;
	void	*in;

	if (!lst || !f || !del)
		return (NULL);
	inter = NULL;
	while (lst)
	{
		in = f(lst->content);
		nod = ft_lstnew(in);
		if (!nod)
		{
			del(in);
			ft_lstclear(&inter, del);
			return (NULL);
		}
		ft_lstadd_back(&inter, nod);
		lst = lst->next;
	}
	return (inter);
}
// void *f(void *c)
// {
// 	char *cc;
// 	char *s;
// 	int i;
// 	int len;

// 	cc = (char *)c;
// 	len = ft_strlen(s);
// 	s = malloc(len + 1);
// 	i = 0;
// 	while (cc[i])
// 	{
// 		if (cc[i] >= 'a' && cc[i] <= 'z')
// 			s[i] = cc[i] - 32;
// 		else
// 			s[i] = cc[i];
// 		i++;
// 	}
// 	s[i] = '\0';
// 	return ((void *)s);
// }

// void del(void *c)
// {
// 	free(c);
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	t_list *node5;

// 	node1 = ft_lstnew("c");
// 	node2 = ft_lstnew("a");
// 	node3 = ft_lstnew("v");
// 	node4 = ft_lstnew("a");
// 	node5 = ft_lstnew("?");
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);
// 	ft_lstadd_back(&lst, node5);

// 	t_list *newlist = ft_lstmap(lst, f, del);
// 	while(newlist)
// 	{
// 		printf("%s\n", (char *)newlist->content);
// 		newlist = newlist->next;
// 	}
// 	return (0);
// }