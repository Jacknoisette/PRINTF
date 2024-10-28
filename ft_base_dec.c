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

// int	ft_iterative_power(int nb, int power)
// {
// 	int	t;
// 	int	loop;

// 	loop = 1;
// 	t = nb;
// 	if (power < 0)
// 		return (0);
// 	if (nb == 0 && power == 0)
// 		return (1);
// 	while (loop < power)
// 	{
// 		nb *= t;
// 		loop++;
// 	}
// 	return (nb);
// }

int ft_check_base_dec(char *numb)
{
	//int	dec;
	int base;
	//int	temp;
	//int	i;

	//i = 0;
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

/*
char ft_hex_to_dec(char *numb, int *i)
{
	char	*hexa;
	int			j;
	int			k;


	hexa = "0123456789abcdef";
	j = 0;
	k = 0;

	while (numb[*i] != '\0')
	{
		while(numb[*i] != hexa[j])
			j++;
		k += j;
		i++;
	}
}
*/

// char ft_base_dec(char *numb)
// {
	
// 	char	octa;
// 	int			i;
// 	int			base;

// 	octa = "012345678";
// 	i = 0;
// 	base = ft_check_base_dec(numb);

// 	if (base == 8)	if (base == 8)
// 		i = 1;
// 	if (base == 16)
// 		i = 2;
	

// }

int main(void)
{
	char	i[] = "0xA";
	
	printf("%d\n", ft_check_base_dec(i));
}
