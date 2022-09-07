/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:18:13 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/08 03:35:18 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!i && !j)
		return (malloc(1));
	tmp = malloc(sizeof(char) * (i + j + 1));
	ft_memcpy(tmp, s1, i);
	ft_memcpy(tmp + i, s2, j);
	return (tmp);
}
/*
int	main(void)
{
	char	*s1 = "12345678";
	char	*s2 = "abcde";
	char	*s3;

	printf("%s\n",s1);
	printf("%s\n",s2);
	s3 = ft_strjoin(s1, s2);
	printf("%s\n",s3);
	return(0);
}
*/
