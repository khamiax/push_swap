/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:17:03 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 16:03:27 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*rtn;
	int				i;
	int				j;

	j = 0;
	i = 0;
	rtn = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!rtn)
		return (NULL);
	while (s1[j])
	{
		rtn[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		rtn[j + i] = s2[i];
		i++;
	}
	rtn[i + j] = '\0';
	return (rtn);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("salut", " test 2"));
// 	free(ft_strjoin("salut", " test 2"));
// 	return (0);
// }