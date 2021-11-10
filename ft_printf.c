/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:53:22 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printfcommands(char format, va_list ap, int *count)
{
	char	c;

	if (format == 'c')
		ft_putchar(c = va_arg(ap, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (format == 'x')
		ft_puthexadown(va_arg(ap, int), count);
	else if (format == 'X')
		ft_puthexaup(va_arg(ap, int), count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 'p')
		ft_puthexaaddress(va_arg(ap, size_t), 1, count);
	else if (format == 'u')
		ft_putunbr(va_arg(ap, unsigned int), count);
}

int	ft_printf(char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(str[i], &count);
		else
			ft_printfcommands(str[(i++) + 1], ap, &count);
		i++;
	}
	return (count);
}
