/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:16:01 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/17 16:29:28 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void f(unsigned int n, char *c)
// {
//     n = 0;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main()
// {
//     char s[] = "salut";
//     ft_striteri(s, f);
//     printf ("%s", s);
//     return (0);
// }