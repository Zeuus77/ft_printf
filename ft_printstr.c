/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:11:31 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/06 17:11:33 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
int	ft_printstr(char *s)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	if(!s)
	{
		write(1,"(null)",6);
		return(6);
	}
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return(count);
}