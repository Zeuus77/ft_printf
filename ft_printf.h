/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:14:48 by youel-id          #+#    #+#             */
/*   Updated: 2022/11/06 17:14:51 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr(int n);
int ft_putchar(int c);
int	ft_putnbruns(unsigned int n);
int	ft_printstr(char *s);
int ft_printhexa(unsigned int s, char c);
int ft_printadress(unsigned long s);
int ft_printf(const char *str, ...);
#endif