/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:15:51 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/31 10:49:10 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
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
