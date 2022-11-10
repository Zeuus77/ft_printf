/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:10:21 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/06 17:10:23 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	i;
	int c;

	c = 0;
	i = (long int)n;
	if (i < 0)
	{
		i *= -1;
		c += ft_putchar('-');
	}
	if (i > 9)
	{
		c += ft_putnbr(i / 10 );
		c += ft_putnbr(i % 10 );
	}
	if (i >= 0 && i <= 9)
	{
		c += ft_putchar(i + 48);
	}
	return(c);
}