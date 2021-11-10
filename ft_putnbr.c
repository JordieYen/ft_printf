/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:45:00 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int n, int *count)
{
	long	i;
	char	j;

	i = n;
	if (i < 0)
	{
		updatec(count);
		i = i * -1;
		write(1, "-", 1);
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10, count);
		ft_putnbr(i % 10, count);
	}
	else
	{
		updatec(count);
		j = i + 48;
		write(1, &j, 1);
	}
}
