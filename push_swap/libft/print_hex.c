/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:48:54 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/10 13:18:20 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	print_hex(unsigned long n, int j)
{
	char	*base;
	size_t	count;

	count = 0;
	if (j == 0)
		base = "0123456789abcdef";
	if (j == 1)
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += print_hex(n / 16, j);
	}
	count += print_c(base[n % 16]);
	return (count);
}
