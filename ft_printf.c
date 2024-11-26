/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:40:41 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/26 16:45:10 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...);

int	main(void)
{
	char	c;
	char	str[] = "This is a string";

	c = 'x';
	printf("%d\n", ft_printf("Hello how are %d %% %s\n", 553, str));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	args;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = j + ft_find_format(format[i], args);
		}
		else
			j = j + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (j);
}
