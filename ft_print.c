/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:27:08 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/25 15:43:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...);
int	max(int num_args, ...);

int	main(void)
{
	int	i;

	i = printf("The value returned by printf\n");
	printf("i = %d\n", i);
	printf("%.2d\n", 198732);
	printf("%.2f\n", 5.290390);
	printf("%.15s\n", "this is a test a;l a;llsdjk a;lsdkjf");
	printf("%d\n", max(5, 1, 2, 3, 4, 5));
	printf("");
	return (0);
}

int	ft_printf(const char *format, ...)
{
	static int	i;
	static int	slen;
	va_list		args;

	slen = ft_strlen(format);
	va_start(args, format);
	while (i < slen)
	{
		va_arg(args, char);
		i++;
	}
	va_end(args);
	return (slen);
}

int	max(int num_args, ...)
{
	static int	i;
	static int	x;
	static int	max;
	va_list		args;

	va_start(args, num_args);
	while (i < num_args)
	{
		x = va_arg(args, int);
		if (i == 0)
			max = x;
		else if (x > max)
		{
			max = x;
		}
		i++;
	}
	va_end(args);
	return (max);
}
