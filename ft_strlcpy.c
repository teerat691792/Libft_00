/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:10:55 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/29 02:09:01 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int n)
{
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(src);
	if (!src && n < size)
		return (0);
	i = 0;
	if (n != 0)
	{
		while (src[i] && i < n - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (size);
}
