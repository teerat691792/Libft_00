/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 01:43:16 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/29 02:40:03 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlen(dst);
	i = ft_strlen(src);
	if (n <= j)
		return (n + i);
	k = 0;
	while (src[k] && k + j < n - 1)
	{
		dst[k + j] = src[k];
		k++;
	}
	dst[k + j] = '\0';
	return (i + j);
}
