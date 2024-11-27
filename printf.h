/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:35:37 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/27 11:50:01 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_find_format(char format, va_list args);
int				ft_putdec(int nb);
unsigned int	ft_putuns(unsigned int nb);

#endif
