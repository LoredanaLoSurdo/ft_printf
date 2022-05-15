/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:00:38 by llo-surd          #+#    #+#             */
/*   Updated: 2022/05/05 16:10:08 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H	
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

int	ft_char_print(char c);
int	ft_hex_print(size_t n, char c);
int	ft_num_length(size_t n, int base);
int	ft_num_print(long long int n);
int	ft_printf(const char *str, ...);
int	ft_specifiers(const char c, va_list v, int *i);
int	ft_str_print(va_list v);

#endif
