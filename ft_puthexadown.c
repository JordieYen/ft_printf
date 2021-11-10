/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadown.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:17:39 by jking-ye          #+#    #+#             */
/*   Updated: 2021/11/09 16:48:53 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexadown(unsigned int n, int *count)
{
	size_t	i;
	char	*str;

	i = n;
	if (i >= 16)
	{
		ft_puthexadown(i / 16, count);
		ft_puthexadown(i % 16, count);
	}
	else
	{
		updatec(count);
		str = "0123456789abcdef";
		write(1, &str[i], 1);
	}
}
