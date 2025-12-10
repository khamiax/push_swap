/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:23:29 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/24 17:24:57 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verif(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*rtn;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_verif(s1[start], set))
		start++;
	while (end >= start && ft_verif(s1[end], set))
		end--;
	rtn = malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < (end - start + 1))
	{
		rtn[i] = s1[start + i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim("alalallsalutalll", "al"));
// 	free(ft_strtrim("alalallsalut", "al"));
// 	return (0);
// }