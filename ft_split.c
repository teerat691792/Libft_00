/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:21:17 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/15 18:08:34 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_splitsubstr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (start > (size_t)ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s) - start < len)
		len = (size_t)ft_strlen(s + start);
	tmp = malloc(sizeof(*s) * len + 1);
	//printf("len : %zu\n", len);
	i = 0;
	while (i < len && s[start + i])
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
//	if (s)
//		free((char *)s);
	return (tmp);
}

char	*ft_splitdup(const char *s1)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	dest = (char *)malloc(sizeof(*s1) *(i + 1));
	if (s1 == NULL)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
//	printf("dup	=%s\n",dest);
//	if (s1)
//		free((char *)s1);
	return (dest);
}
size_t	ft_countsplit(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count =  0;
	if(!s)
		return(count);
//	if(!c)
//		return(1);
	while(s[i])
	{
		if (s[i] != c && s[i + 1] == c)
		{
//			printf("s[%zu]	=%c\n",i,s[i]);
//			printf("		case A	@@\n");
			count++;
		}
//		else if (s[i + 1] == '\0' && s[i] == c)
		else if (s[i + 1] == '\0' && count == 0 && s[i] == c)
		{
//			printf("		case B	@@\n");
			return (0);
		}
		else if (s[i + 1] == '\0' && count == 0 )
		{	
//			printf("		case C	@@\n");
			count++;
		}
/*		else if (s[i + 1] == '\0' && count == 0 && !c)
		{	
			printf("		case D	@@\n");
			count++;
		}
*/		else if (s[i + 1] == '\0' && s[i] != c )
		{	
//			printf("		case E	@@\n");
			count++;
		}
		i++;
	}
/*	 if (i != 0 && count == 0)
		{	
			printf("		case F	@@\n");
			count++;
		}
*///	printf("i	=%zu\n",i);
//	printf("sum n	=%zu\n",count);
//	printf("\n");
	return(count);

}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	count;
	size_t	b;
	size_t	i;
	//char	*str;
	
//	str = (char *)s;
	if (!s)
		return(NULL);
	// mallloc main **
	count = ft_countsplit(s, c);
	tmp = (char **)malloc(sizeof(char*) * (count + 1));
	if (!tmp)
		return(NULL);
	// strdup spilt
	i = 0;
	while (i < count)
	{
		while(s[0] == c)
			s = ft_strchr(s, c) + 1;
			
//		printf("str	=%s\n",s);
//		printf("i	=%zu\n",i);

		b = ft_strlen(s) - ft_strlen(ft_strchr(s, c));
//		printf("b	=%zu\n",b);

//		str = ft_splitdup(ft_splitsubstr(s,0,b));
		tmp[i] = ft_splitsubstr(s,0,b);
		//tmp[i] = str;
		s = ft_strchr(s, c) + 1;
//		free(str);
		i++;
	}
	tmp[i] = NULL;
//	printf(" $$$$$$$$$$$$$$\n");
	return(tmp);
}

/*
int	main(void)
{
	char	s[50] = "123a1234a12345a5";
	char	c = 'a';
	char	**tmp;
	size_t	i;

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

	printf("_- 7 8 ----------------------------------_\n\n");

	strcpy(s, "chinimala   *");
	c = 0;
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

	printf("_-  9  ----------------------------------_\n\n");

	strcpy(s, "        ");
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

	printf("_-  14  15  ----------------------------------_\n\n");

	strcpy(s, "        ");
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

	printf("_-test----------------------------------_\n\n");

	strcpy(s, "123a1234a1345a1");
	c = 'a';
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
