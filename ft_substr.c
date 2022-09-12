/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:15:56 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/13 01:15:40 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (start > (size_t)ft_strlen(s))
		return (malloc(1));
	if (ft_strlen(s) - start < len)
		len = (size_t)ft_strlen(s + start);
	tmp = malloc(sizeof(*s) * len + 1);
//	tmp = (char *)(s + start);
//	ft_bzero(((void *)(s + start)),len - start);
	i = 0;
	while (i < len && s[start + i])
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = strdup("0123456789");
	printf("%s\n",s1);
	s2 = ft_substr(s1, 9, 10);
	printf("%s\n",s2);


	free(s1);
	free(s2);
	return (0);
}
*/
