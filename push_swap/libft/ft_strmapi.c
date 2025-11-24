/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:56:11 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/21 16:32:54 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtn;
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (s[len])
		len++;
	rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
// char f(unsigned int n, char c)
// {
//     n = 0;
//     if (c >= 'a' && c <= 'z')
//         c -= 32;
//     return (c);
// }

// int main()
// {
//     char *mapi;
//     char s[] = "salut";
//     mapi = ft_strmapi(s, f);
//     // printf ("%s", mapi);
//     free(mapi);
//     return (0);
// }