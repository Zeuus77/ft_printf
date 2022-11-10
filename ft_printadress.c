/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:23:51 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/09 03:23:53 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_adress(unsigned long s)
{
	char *mn;
	mn = "0123456789abcdef";

	write(1,&mn[s],1);
	return(1);
}
int ft_printadress(unsigned long s)
{
	int count;
	count = 0;
	if (s >= 16)
	{
		count += ft_printadress(s / 16);
		count += ft_printadress(s % 16);
	}
	if (s >= 0 && s <= 15)
	{
		count += ft_adress(s);
	}
	return(count);
}

