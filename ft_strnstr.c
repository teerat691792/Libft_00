/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 02:31:28 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/30 02:46:17 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (needle[0] == '\0' || haystack[0] == '\0')
		return (0);
	i = 0;
	j = 0;
	tmp = (char *)haystack;
	while (tmp[i] != '\0' && i < len)
	{
		while (tmp[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return (tmp + i);
		i++;
	}
	return (0);
}
