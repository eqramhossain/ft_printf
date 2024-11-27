/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:18:15 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 17:28:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(void *add)
{
	int		count;
	long	mem;

	count = 0;
	mem = (long)add;
	count += ft_putstr("0x");
	count += ft_puthexa_ptr(mem);
	return (count);
}

int	ft_puthexa_ptr(long nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nb > 15)
	{
		count += ft_puthexa_ptr(nb / 16);
		count += ft_puthexa_ptr(nb % 16);
	}
	else
	{
		count += ft_putchar(base[nb]);
	}
	return (count);
}
