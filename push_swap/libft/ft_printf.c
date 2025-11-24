/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:28:01 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/10 13:18:45 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	arg_printf(char param, va_list args)
{
	if (param == 'c')
		return (print_c(va_arg(args, int)));
	if (param == 's')
		return (print_s(va_arg(args, char *)));
	if (param == 'p')
		return (print_p(va_arg(args, void *)));
	if (param == 'd')
		return (print_d(va_arg(args, int)));
	if (param == 'i')
		return (print_d(va_arg(args, int)));
	if (param == 'u')
		return (print_u(va_arg(args, unsigned int)));
	if (param == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (param == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (param == '%')
		return (print_percent());
	return (0);
}

int	ft_printf(const char *param, ...)
{
	va_list	args;
	int		i;
	int		rtn;

	rtn = 0;
	i = 0;
	if (!param)
		return (0);
	va_start(args, param);
	while (param[i])
	{
		if (param[i] == '%' && param[i + 1] != '\0')
		{
			i++;
			rtn += arg_printf(param[i], args);
		}
		else
			rtn += print_c(param[i]);
		i++;
	}
	va_end(args);
	return (rtn);
}

// int	main(void)
// {
// 	char	s;
// 	int		i;
// 	char	*c;
// 	void	*v;

// 	s = 't';
// 	i = 150;
// 	c = "deja vue";
// 	v = "test";
// 	ft_printf ("%c\n", s);
// 	ft_printf ("%s\n", c);
// 	ft_printf ("%p\n", v);
// 	ft_printf ("%d\n", i);
// 	ft_printf ("%i\n", i);
// 	ft_printf ("%u\n", i);
// 	ft_printf ("%x\n", i);
// 	ft_printf ("%X\n", i);
// 	ft_printf ("%%\n");
// 	return (0);
// }
