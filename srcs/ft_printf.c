/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:01:46 by llo-surd          #+#    #+#             */
/*   Updated: 2022/05/05 16:07:47 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{	
	int		i;
	int		count;
	va_list	v;

	va_start(v, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[++i])
		{
			count += ft_specifiers(str[i], v, &i);
			i++;
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			i++;
			count++;
		}
	}
	va_end(v);
	return (count);
}
