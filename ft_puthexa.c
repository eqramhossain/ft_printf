/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:56:00 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 16:38:37 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int	ft_check_base(long int nb, char x)
// {
// 	char		*base;
// 	long int	rtr_nb;
//
// 	base = NULL;
// 	rtr_nb = 0;
// 	if (x == 'x')
// 		base = "0123456789abcdef";
// 	else
// 		base = "0123456789ABCDEF";
// 	rtr_nb = ft_puthexa(nb, base);
// 	return (rtr_nb);
// }

int	ft_puthexa_x(int nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nb == -2147483648)
		return (write(1, "80000000", 8));
	else if (nb > 15)
	{
		count += ft_puthexa_x(nb / 16);
		count += ft_puthexa_x(nb % 16);
	}
	else
	{
		count += ft_putchar(base[nb]);
	}
	return (count);
}

int	ft_puthexa_X(int nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb == -2147483648)
		return (write(1, "80000000", 8));
	else if (nb > 15)
	{
		count += ft_puthexa_X(nb / 16);
		count += ft_puthexa_X(nb % 16);
	}
	else
	{
		count += ft_putchar(base[nb]);
	}
	return (count);
}
