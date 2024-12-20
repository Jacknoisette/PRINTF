/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdhallen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:15:34 by jdhallen          #+#    #+#             */
/*   Updated: 2024/10/24 13:15:35 by jdhallen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
#include <stdio.h>
//# include "../../Cercle00/Libft/libft.h"

int ft_printf(const char *string, ...);
int ft_putchar_n(char c);
int ft_putstr_n(char *str);
int	ft_putunnbr_n(unsigned int n);
int	ft_putnbr_n(int n);

#endif