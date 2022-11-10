/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumb_un.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:11:17 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/06 17:11:19 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbruns(unsigned int i)
{
	int c;

	c = 0;
	if (i > 9)
	{
		c += ft_putnbruns(i / 10 );
		c += ft_putnbruns(i % 10 );
	}
	if (i >= 0 && i <= 9)
	{
		c += ft_putchar(i + 48);
	}
	return(c);
}