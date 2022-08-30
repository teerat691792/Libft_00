/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:29:57 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/29 23:24:14 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*tmp;

	if (!dst && !src)
		return (0);
	tmp = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}						
