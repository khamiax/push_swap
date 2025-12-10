/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:49:39 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 15:48:34 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*rtn;
	size_t				i;

	i = 0;
	rtn = malloc(nmemb * size);
	if (!rtn)
		return (NULL);
	while (i < (nmemb * size))
	{
		rtn[i] = 0;
		i++;
	}
	return (rtn);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_calloc(10, 2));
// 	return (0);
// }
