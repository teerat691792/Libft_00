/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:24:07 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/12 05:00:05 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	i;
	size_t	l;

	if(!s || !f)
		return(0);
	l = ft_strlen(s);
	if(!l)
		return(calloc(1,1));
	tmp = malloc(sizeof(char) * l + 1);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;;
	}
	tmp[i] = '\0';
	return (tmp);
}
