/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:09:13 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/07 13:30:56 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_conv(va_list lst, char conv)
{
	int	re;

	re = 0;
	if (conv == 'c')
		re += ft_putchar(va_arg(lst, int));
	else if (conv == 's')
		re += ft_putstr(va_arg(lst, char *));
	else if (conv == 'p')
		re += ft_putptr(va_arg(lst, unsigned long));
	else if (conv == 'd' || conv == 'i')
		re += ft_itoa(va_arg(lst, int));
	else if (conv == 'u')
		re += ft_itoa_u(va_arg(lst, unsigned int));
	else if (conv == 'x')
		re += ft_put_hexa_lower(va_arg(lst, unsigned int));
	else if (conv == 'X')
		re += ft_put_hexa_upper(va_arg(lst, unsigned int));
	else if (conv == '%')
		re += ft_putchar('%');
	return (re);
}

int	main_fnc(va_list lst, char *msg)
{
	int	i;
	int	re;
	int	check;

	i = 0;
	re = 0;
	while (msg[i])
	{
		if (msg[i] == '%')
		{
			check = re;
			re += get_conv(lst, msg[i + 1]);
			i += 2;
		}
		else
			re += ft_putchar(msg[i++]);
	}
	return (re);
}

int	ft_printf(const char *msg, ...)
{
	int		re;
	va_list	lst;

	va_start(lst, msg);
	re = main_fnc(lst, (char *)msg);
	va_end(lst);
	return (re);
}
