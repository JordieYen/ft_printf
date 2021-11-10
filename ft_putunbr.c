/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:46:03 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr(unsigned int n, int *count)
{
	long	i;
	char	j;

	i = n;
	if (i >= 10)
	{
		ft_putunbr(i / 10, count);
		ft_putunbr(i % 10, count);
	}
	else
	{
		updatec(count);
		j = i + 48;
		write(1, &j, 1);
	}
}
