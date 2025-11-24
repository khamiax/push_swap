/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:30:14 by msaurel           #+#    #+#             */
/*   Updated: 2025/10/24 17:22:58 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*rtn;
	int		len;
	long	num;

	num = (long)n;
	len = ft_len(num);
	rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	rtn[len] = '\0';
	if (num == 0)
		rtn[0] = '0';
	if (num < 0)
	{
		rtn[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		rtn[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (rtn);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// 	return (0);
// }