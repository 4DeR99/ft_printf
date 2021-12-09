/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:16:30 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/09 16:42:24 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_itoa_u(unsigned int nbr);
int		ft_itoa(int nbr);
int		ft_printf(const char *msg, ...);
int		ft_put_hexa_lower(unsigned int nb);
int		ft_put_hexa_upper(unsigned int nb);
int		ft_putchar(char c);
int		ft_putptr(unsigned long nb);
int		ft_putstr(char *s);
int		ft_strlen(const char *s);

#endif