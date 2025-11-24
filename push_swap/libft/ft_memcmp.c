/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:48:29 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 15:36:11 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sb1;
	const unsigned char	*sb2;

	sb1 = (const unsigned char *)s1;
	sb2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sb1[i] != sb2[i])
			return ((int)sb1[i] - (int)sb2[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char src[] = "ts";
// 	const char crs[] = "te";
// 	printf("%d\n", ft_memcmp(crs, src, 3));
// 	printf("%d\n", memcmp(crs, src, 3));
// 	return (0);
// }