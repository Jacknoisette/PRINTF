/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:12:48 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/30 09:17:19 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_puthexa_n(unsigned long n)
{
	char	*hex;
	char	c;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_puthexa_n(n / 16);
	i ++;
	c = (hex[n % 16]);
	write(1, &c, 1);
	return (i);
}

int	ft_putp_n(void *n)
{
	unsigned long	i;
	unsigned long	add;

	i = 0;
	if (!n)
		return (ft_putstr_n("(nil)"));
	add = (unsigned long)n;
	i += ft_putstr_n("0x");
	i += ft_puthexa_n(add);
	return (i);
}

/*
int main(void)
{
    int i;

    i = ft_putp_n(15);
    printf("\n%d\n", i);
}
*/
