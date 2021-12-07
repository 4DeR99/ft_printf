/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_lower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:23:02 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/07 11:16:06 by moulmado         ###   ########.fr       */
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

int	ft_put_hexa_lower(unsigned int nb)
{
	char	*hexa_tab;

	hexa_tab = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_put_hexa_lower(nb / 16);
		ft_putchar(hexa_tab[nb % 16]);
	}
	if (nb < 16)
		ft_putchar(hexa_tab[nb % 16]);
	return (n_l(nb));
}
