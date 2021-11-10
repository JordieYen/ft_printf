/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaaddress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:47:42 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexaaddress(size_t n, int start, int *count)
{
	size_t	i;
	char	*str;

	i = n;
	if (start == 1)
	{
		*count = *count + 2;
		write(1, "0x", 2);
	}
	if (i >= 16)
	{
		ft_puthexaaddress((i / 16), 0, count);
		ft_puthexaaddress((i % 16), 0, count);
	}
	else
	{
		updatec(count);
		str = "0123456789abcdef";
		write(1, &str[i], 1);
	}
}
