/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:01:34 by llo-surd          #+#    #+#             */
/*   Updated: 2022/05/05 15:01:35 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_length(size_t n, int base)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= base;
		count++;
	}
	return (count);
}
