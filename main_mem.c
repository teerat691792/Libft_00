/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:13:32 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/07 21:46:45 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	size_t t;

	*d = (char)dst;
	*s = (char)src;

	if (len == 0 || dst == src)		/* nothing to do */
		return (dst);


	if ((size_t)dst < (size_t)src)
	{
		/*
		 * Copy forward.
		 */
		 
/*		t = len;
		while (--t)
		{
			*(int *)d = *(int *)s;
			s += sizeof(char);
			d += sizeof(char);
		}
*/		
		t = len;
		while (--t)
		{
			*d++ = *s++;
		}
	} 
	else
	{
		/*
		 * Copy backwards.  Otherwise essentially the same.
		 * Alignment works as before, except that it takes
		 * (t&wmask) bytes to align, not wsize-(t&wmask).
		 */
		s += len;
		d += len;
		t = len;
	/*
		while (--t)
		{
			s -= sizeof(src);
			d -= sizeof(dst);
			*(int *)d = *(int *)s;
		}
	*/
		t = len;
		while (--t)
		{
			*--d = *--s;
		}	
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
