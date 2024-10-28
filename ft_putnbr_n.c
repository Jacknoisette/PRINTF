/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:14:03 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/24 13:14:05 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

int	ft_putnbr_n(int n)
{
	int	i;
    char    c;

    i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
        i++;
	}
	if (n >= 10)
		i += ft_putnbr_n(n / 10);
    i ++;
	c = (n % 10) + '0';
	write(1, &c, 1);
    return (i);
}

/*
int main(void)
{
    int i;

    i = ft_putnbr_n(-1400);
    printf("\n%d\n", i);
}
*/