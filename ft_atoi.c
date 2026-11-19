/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltabbiz <ltabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:16:46 by ltabbiz           #+#    #+#             */
/*   Updated: 2026/11/19 23:08:00 by ltabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		x;
	long	r;

	i = 0;
	while (nptr[i] == ' ' || ((nptr[i] <= 13 && nptr[i] >= 9)))
		i++;
	x = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			x = -x;
		i++;
	}
	r = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		r = r * 10 + (nptr[i] - '0');
		i++;
	}
	return (r * x);
}
