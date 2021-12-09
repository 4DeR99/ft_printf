/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:51:59 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/09 18:14:13 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	n_l(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb >= 16)
	{
		nb /= 16;
		len++;
	}
	return (len + 1);
}

static int	ft_put_ptr(unsigned long nb)
{
	char	*hexa_tab;

	hexa_tab = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16);
		ft_putchar(hexa_tab[nb % 16]);
	}
	if (nb < 16)
		ft_putchar(hexa_tab[nb % 16]);
	return (n_l(nb));
}

int	ft_putptr(unsigned long nb)
{
	int	len;

	ft_putstr("0x");
	len = ft_put_ptr(nb);
	return (len + 2);
}
