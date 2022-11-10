/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:52:01 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/06 19:52:04 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa( unsigned int s, char c)
{
	char *mj;
	char *mn;
	
	mj = "0123456789ABCDEF";
	mn = "0123456789abcdef";
	
	if(c == 'x')
	{
		write (1, &mn[s], 1);
		return (1);
	}
	else if(c == 'X')
	{
		write(1, &mj[s], 1);
		return(1);
	}
	return(0);
}
int ft_printhexa(unsigned int s, char c)
{
	int count;
	count = 0;
	if (s >= 16)
	{
		count += ft_printhexa(s / 16, c);
		count += ft_printhexa(s % 16, c);
	}
	if (s >= 0 && s <= 15)
		count += ft_hexa(s,c);
	return(count);
}
