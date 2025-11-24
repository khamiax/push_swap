/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:20:28 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/23 15:16:41 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
// void del(void *c)
// {
// 	free(c);
// 	printf("%s\n", "free");
// }

// int main()
// {
// 	t_list *node;

// 	node = ft_lstnew(ft_strdup("/1/2/3/4/5/6/"));
// 	printf("old content :%s\n", (char *)node->content);
// 	ft_lstdelone(node, del);
// 	printf("new content :%s\n", (char *)node->content);
// 	return (0);
// }