/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:02:22 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/10 13:18:16 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	print_d(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count += print_c('-');
		count += print_d(-n);
	}
	else if (n > 9)
	{
		count += print_d(n / 10);
		count += print_c(n % 10 + '0');
	}
	else
		count += print_c(n + '0');
	return (count);
}
