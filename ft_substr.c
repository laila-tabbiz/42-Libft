/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltabbiz <ltabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:28:42 by ltabbiz           #+#    #+#             */
/*   Updated: 2026/11/19 16:42:59 by ltabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			lens;
	char			*x;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (lens <= start)
		len = 0;
	if (len > lens - start)
		len = lens - start;
	x = malloc(len + 1);
	if (!x)
		return (0);
	i = 0;
	while (i < len)
	{
		x[i] = s[start + i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
