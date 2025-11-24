/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:56:15 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 15:38:58 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = 0;
	j = 0;
	while (little[n] != '\0')
		n++;
	if (n == 0)
		return ((char *)big);
	while (big[j] != '\0' && j <= len)
	{
		i = 0;
		while (little[i] == big[j + i] && (j + i) < len)
		{
			i++;
			if (i == n)
				return ((char *)&big[j]);
		}
		j++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char big[] = "je test marien";
// 	const char crs[] = "test";
// 	size_t	c;
// 	c = 2;
// 	printf("%s\n", ft_strnstr(big, crs, c));
// 	return (0);
// }