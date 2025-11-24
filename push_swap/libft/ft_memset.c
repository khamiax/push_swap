/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:15:05 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/14 11:33:40 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		((char *)s)[i] = c;
		n--;
		i++;
	}
	return (s);
}
// int	main(void)
// {
// 	int c;
// 	c = 86;
// 	char s[] = "test";
// 	printf("%s", (char *)ft_memset(s, c, 5));
// 	return (0);
// }
