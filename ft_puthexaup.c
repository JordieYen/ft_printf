/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:50:03 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexaup(unsigned int n, int *count)
{
	size_t	i;
	char	*str;

	i = n;
	if (i >= 16)
	{
		ft_puthexaup(i / 16, count);
		ft_puthexaup(i % 16, count);
	}
	else
	{
		updatec(count);
		str = "0123456789ABCDEF";
		write(1, &str[i], 1);
	}
}
