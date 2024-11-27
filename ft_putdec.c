/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:45:27 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 11:07:22 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putdec(int nb)
{
	unsigned int	result;

	result = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		result = -nb;
	}
	else if (nb > 9)
	{
		ft_putdec(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar((nb % 10) + '0');
	return (0);
}
