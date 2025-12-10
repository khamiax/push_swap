/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:04:14 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 16:39:47 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		rtn = malloc(1);
		if (!rtn)
			return (NULL);
		rtn[0] = '\0';
		return (rtn);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	rtn = malloc((len + 1) * sizeof(char));
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rtn[i] = s[start + i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

// int	main(void)
// {
// 	// printf("%s", ft_substr("test", 0, 4));
// 	free(ft_substr("test", 0, 6));
// 	return (0);
// }
