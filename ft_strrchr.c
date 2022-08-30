/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 02:05:55 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/30 03:53:44 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	a;
	unsigned int	i;

	a = (char)c;
	tmp = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (tmp[i] == a)
			return ((char *)tmp + i);
		i--;
	}
	if (!a && tmp[i] == '\0')
		return ((char *)tmp + i);
	return (0);
}
