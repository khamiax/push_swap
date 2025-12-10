/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:12:48 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/10 13:18:31 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	print_u(unsigned long n)
{
	size_t	count;

	count = 0;
	if (n > 9)
	{
		count += print_d(n / 10);
		count += print_c(n % 10 + '0');
	}
	else
		count += print_c(n + '0');
	return (count);
}
