/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:15:51 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/05 22:13:59 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystake, const char *needle, size_t len);

int	main(void)
{
	char	dst1[100] = "lorem ipsum dolor sit amet";
	char	dst2[100] = "lorem ipsum dolor sit amet";
	char	src1[10] = "dolor";
	char	src2[10] = "dolor";
	size_t	len = 15;

	char	*tmp;
	char	*tmp1;
//	printf("default	= %s \n",strnstr(dst1,src1,len));
//	printf("ft___	= %s \n",ft_strnstr(dst2,src2,len));
//	printf("result	= %s \n",(dst2 + 5));

	tmp1 = strnstr(dst1,src1,len);
	printf("default	= %s \n",tmp1);
	tmp = ft_strnstr(dst2,src2,len);
	printf("ft____	= %s \n",tmp);
	




/*
	char	str[100] = "xzzx\0xxAcccc";
//	char	src[100];
	int	n;
	char	c;

	printf("\n\n~~~~~~~~**test** ft_strrchr   and  ft_strrchr ~~~~~~~~\n");

	c	=	'A';
	n	=	0;

	printf("default\n");
	printf("str		= %s\n",str);
	printf("char		= %c\n",c);
	printf("result forward	= %s\n",strchr(str,c));
	printf("result reverse	= %s\n",strrchr(str,c));
	printf("\n");

	printf("ft_strrchr\n");
	printf("str		= %s\n",str);
	printf("char		= %c\n",c);
	printf("result forward	= %s\n",strchr(str,c));
	printf("result reverse	= %s\n",strrchr(str,c));
	printf("\n");
*/
/*
	char	str[100] = "\0";
//	char	src[100];
	int	n;
	char	c;

	printf("\n\n~~~~~~~~~~~~test**ft_strchr~~~~~~~~~~~\n");

	c	=	'\0';
	n	=	0;

	printf("default\n");
	printf("str		= %s\n",str);
	printf("char		= %c\n",c);
	printf("result		= %s\n",strchr(str,c));
	printf("\n");

	printf("ft_strchr\n");
	printf("str		= %s\n",str);
	printf("char		= %c\n",c);
	printf("result		= %s\n",strchr(str,c));
	printf("\n");
*/
	//strlcpy
	//strlcat
	//strrchr
	//strncmp
	//strnstr

	return (0);
}
/*
	if (argc == 4)
		{
			strcpy(str,argv[4]);
			strcpy(src,argv[3]);
			n = *argv[2];
			c = *argv[1];

		printf("str		= %s\n",str);
		printf("src		= %s\n",str);
		printf("n		= %d\n",n);
		printf("char		= %c\n",c);
		}
	else
		printf(" Plz assign value \"char\" \"n\" \"src\" \"str\" ");
*/
