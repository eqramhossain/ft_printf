/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:45:27 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 13:47:28 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putdec(int nb)
{
	int	count;

	count = ft_number_size(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		count = -nb;
	}
	else if (nb > 9)
	{
		ft_putdec(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar((nb % 10) + '0');
	return (count);
}
