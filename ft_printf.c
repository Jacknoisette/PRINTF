/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:11:47 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/30 09:15:27 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_string(char chr, va_list args)
{
	int	count;

	count = 0;
	if (chr == 'c')
		count = ft_putchar_n(va_arg(args, int));
	else if (chr == 's')
		count = ft_putstr_n(va_arg(args, char *));
	else if (chr == 'd' || chr == 'i')
		count = ft_putnbr_n(va_arg(args, int));
	else if (chr == 'u')
		count = ft_putunnbr_n(va_arg(args, unsigned int));
	else if (chr == '%')
		count = ft_putchar_n('%');
	else if (chr == 'x')
		count = ft_puthexamin_n(va_arg(args, unsigned int));
	else if (chr == 'X')
		count = ft_puthexamaj_n(va_arg(args, unsigned int));
	else if (chr == 'p')
		count = ft_putp_n(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%' )
		{
			count += check_string(string[i + 1], args);
			i++;
		}
		else
			count += ft_putchar_n(string[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	ft_printf("::::%c:::::%c",'e','\n');
// 	printf("::::%c:::::%c",'e','\n');
// 	ft_printf("_________\n");
// 	ft_printf("Voici le nombre %d\n", -765950);
// 	printf("Voici le nombre %d\n", -765950);
// 	ft_printf("_________\n");
// 	ft_printf("Voici le nombre %i\n", -765950);
// 	printf("Voici le nombre %i\n", -765950);
// 	ft_printf("_________\n");
// 	ft_printf("Voici le nombre %u\n", 2147483647);
// 	printf("Voici le nombre %u\n", 2147483647);
// 	ft_printf("_________\n");
// 	ft_printf("Voici le pointeur %p,%p\n", (void *)0, (void *)0);
// 	printf("Voici le pointeur %p,%p\n", (void *)0, (void *)0);
// 	ft_printf("_________\n");
// 	ft_printf("_________\n");
// 	ft_printf("Voici un %%\n");
// 	printf("Voici un %%\n");
// 	ft_printf("%d\n", ft_printf("%s\n", "Hello"));
// 	printf("%d\n", printf("%s\n", "Hello"));
// }

