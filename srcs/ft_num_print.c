/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:01:42 by llo-surd          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:18 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnum(size_t n)
{
	if (n > 9)
	{
		ft_putnum(n / 10);
		ft_putnum(n % 10);
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, 1);
	}
}

int	ft_num_print(long long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
		count++;
	}
	ft_putnum(n);
	count += ft_num_length(n, 10);
	return (count);
}
