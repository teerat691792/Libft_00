/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:13:32 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/12 22:36:34 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	dst1[11] = "0123456789";
	char	dst2[11] = "0123456789";
	char	*x, *y, *z;
	size_t	n;
	size_t	a;
	size_t	b;

	x = (dst1 + 0);
	y = (dst1 + 2);
	z = (dst1 - 2);
	printf("\n");
	printf("dst		= %p %s \n",&x,x);
	printf("dst1 + 2	= %p %s \n",&y,y);
	printf("dst1 - 6	= %p %s \n",&z,z);

	printf("dst1	=%p %s\n",&dst1,dst1);
	printf("dst2	=%p %s\n",&dst2,dst2);
	a = 3;
	b = 0;
	n = 20;
	printf("a = %zu	b = %zu n = %zu\n",a,b,n);
	memmove(dst1 + a,dst1 + b, n);
	printf("default	=%p %s\n",&dst1,dst1);
	ft_memmove(dst2 + a,dst2 + b, n);
	printf("ft____	=%p %s\n",&dst2,dst2);

	return(0);
}
