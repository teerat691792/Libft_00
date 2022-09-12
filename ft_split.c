/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:21:17 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/13 06:20:31 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	*ft_lensubstr(char const *s, char c, size_t count)
{
	size_t	*len;
	size_t	i;
	char	*tmp;
	
	tmp = (char *)s;
	i = 0;
	len = (size_t *)malloc(sizeof(size_t) * count + 1);
	while (i < count)
	{
		printf("tmp	=%s\n",tmp);
		printf("len tmp	=%zu\n",ft_strlen(tmp));
		printf("len chr =%zu\n",ft_strlen(ft_strchr(tmp, c)));

		len[i] = ft_strlen(tmp) - ft_strlen(ft_strchr(tmp, c));
		printf("len[%zu]	=%zu\n",i,len[i]);

		tmp = ft_strchr(tmp, c) + 1;
		i++;
	}
	printf("\n");

	return(len);
}
*/
size_t	ft_countsplit(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count =  1;
	if(!s || !c)
		return(count);
	while(s[i])
	{
		
		if ((s[i] != c && s[i + 1] == c))   // incorrect
				count++;
		i++;
//		if ( !s[i + 1])
//			count--;
	}
	printf("sum n	=%zu\n",count);
	printf("i	=%zu\n",i);
	printf("\n");
	return(count);

}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	count;
//	size_t	*len;
	size_t	b;
	size_t	i;

	char	*str;
	
	str = (char *)s;
	if (!s)
		return((char**)malloc(sizeof(char *)*1));
	// mallloc main **
	count = ft_countsplit(s, c);
	tmp = (char **)malloc(sizeof(char*) * (count + 1));
	if (!tmp)
		return(0);
	// strdup spilt
//	len = ft_lensubstr(s, c, count);
	i = 0;
	while (i < count)
	{
		while(str[0] == c)
			str = ft_strchr(str, c) + 1;
			
		printf("str	=%s\n",str);
		printf("i	=%zu\n",i);
		printf("count	=%zu\n",count);

		b = ft_strlen(str) - ft_strlen(ft_strchr(str,c));
		printf("b	=%zu\n",b);

		tmp[i] = ft_strdup(ft_substr(str,0,b));
		str = ft_strchr(str, c) + 1;
		i++;
	}

	return(tmp);
}
/*
int	main(void)
{
	char	s[50] = "123a1234a12345a5";
	char	c = 'a';
	char	**tmp;
	size_t	i;

	printf("_-test----------------------------------_\n\n");

	printf("*s	=%s\n",s);
	printf("c	=%c\n",c);
	tmp = ft_split(s,c);
	i = 0;
	while(tmp[i])
	{
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);
		i++;
	}
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);

	printf("_- 1_6 ----------------------------------_\n\n");

	strcpy(s, "  tripoulle  42  ");
	c = ' ';
	printf("*s	=%s\n",s);
	printf("c	=%c\n",c);
	tmp = ft_split(s,c);
	i = 0;
	while(tmp[i])
	{
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);
		i++;
	}
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);

	printf("_- 11 13 ----------------------------------_\n\n");

	strcpy(s, "chinimala");
	c = ' ';
	printf("*s	=%s\n",s);
	printf("c	=%c\n",c);
	tmp = ft_split(s,c);
	i = 0;
	while(tmp[i])
	{
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);
		i++;
	}
		printf("\n*tmp[%zu]	=%s\n",i,tmp[i]);


	return(0);
}
*/
