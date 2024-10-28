/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:11:47 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/24 13:11:49 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

static int handle_format(char chr, va_list args)
{
	int count = 0;

	if (chr == 'c')
		count += ft_putcha_n(va_arg(args, int));
	else if (chr == 's')
		count += ft_putstr_n(va_arg(args, char *));
	else if (chr == 'd' || chr == 'i')
		count += ft_putnbr_n(va_arg(args, int));
	else if (chr == 'u' || chr == 'i')
		count += ft_putunnbr_n(va_arg(args, unsigned int));
	else if (chr == '%')
		count += ft_putchar_n('%');
	else if (chr == 'x')
		count += ft_puthexamin_n(va_arg(args, int));
	else if (chr == 'X')
		count += ft_puthexamaj_n(va_arg(args, int));
	return (count);
}

int ft_printf(const char *string, ...)
{
	int	i;
	int	count;
	va_list	args;

	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%' )
		{
			count += handle_format(string[i + 1], args);
			i++;
		}
		else
			count += ft_putchar_n(string[i]);
		i++;
	}
	va_end(args);
	return (count);
}