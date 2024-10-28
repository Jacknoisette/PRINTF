/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_dec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:14:49 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/24 13:14:51 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_check_base_dec(char *numb)
{
	int base;

	if (numb == NULL)
		return (10);
	base = 10;
	if (numb[0] != '0' || numb[1] != 0)
	{
		if (numb[0] == '0' && numb[1] == 'x')
			base = 16;
		else if (numb[0] == '0')
			base = 8;
		else
			base = 10;
	}
	return (base);
}

int main(void)
{
	char	i[] = "0xA";
	
	printf("%d\n", ft_check_base_dec(i));
}
