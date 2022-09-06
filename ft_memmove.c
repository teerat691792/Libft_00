/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:29:57 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/06 19:07:21 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dst;
	if (n == 0 || dst == src) 
		return (dst);
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (n > 0 && (dst || src))
		{
			*(tmp++) =(unsigned char)(src++);
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*(--tmp) =(unsigned char)(--src);
			n--;
		}
	}
	return (dst);
}						
