/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:45:50 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/10 13:18:23 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	print_p(void *s)
{
	size_t			count;
	unsigned long	tmp;

	count = 0;
	tmp = (unsigned long)s;
	if (s == NULL)
		return (print_s("(nil)"));
	count = print_s("0x");
	count += print_hex(tmp, 0);
	return (count);
}
