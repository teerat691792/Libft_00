/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:13:32 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/06 21:27:04 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_src;
	unsigned char	*p_dst;

	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (dst > src)
	{
		while (len-- > 0)
			p_dst[len] = p_src[len];
	}
	else
	{
		while (len-- > 0 && (p_dst || p_src))
			*(p_dst++) = *(p_src++);
			}
	return (dst);
}						


int	main(void)
{
	char	dst1[11] = "1234567890";
	char	dst2[11] = "1234567890";
	int 	i;
	int 	p;
	int 	l;
	char	*x, *y, *z;

	x = (dst1 + 0);
	y = (dst1 + 2);
	z = (dst1 - 6);
	printf("\n");
	printf("dst1		= %s \n",(x));
	printf("dst1 + 2	= %s \n",(y));
	printf("dst1 - 6	= %s \n",(z));
//	printf("dst1++		= %s \n",(dst1++));
//	printf("dst1--		= %s \n",(dst1--));
	printf("~~~~~~~~~ memcpy  & memmove ~~~~~~\n\n");
	l = 5;
	p = 5;
	x = memmove(dst1 + p,dst1,sizeof(char) * l);
	y = ft_memmove(dst2 + p,dst2,sizeof(char) * l) ;
	i = 0;
	while (i < 15)
	{
		printf("[%d]	default	= %c	ft_move	= %c \n",i,dst1[i],dst2[i]);
		i++;
	}
}
