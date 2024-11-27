/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:44:16 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 11:53:47 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_find_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == '%')
		count = write(1, "%", 1);
	else if (format == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (format == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (format == 'd')
		count = ft_putdec(va_arg(args, int));
	else if (format == 'i')
		count = ft_putdec(va_arg(args, int));
	else if (format == 'u')
		count = ft_putuns(va_arg(args, unsigned int));
	return (count);
}
