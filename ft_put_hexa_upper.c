/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:51:00 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/07 11:16:11 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	n_l(unsigned int nb)
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

int	ft_put_hexa_upper(unsigned int nb)
{
	char	*hexa_tab;

	hexa_tab = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_put_hexa_upper(nb / 16);
		ft_putchar(hexa_tab[nb % 16]);
	}
	if (nb < 16)
		ft_putchar(hexa_tab[nb % 16]);
	return (n_l(nb));
}
