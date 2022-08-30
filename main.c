/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <tkulket@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/30 00:20:17 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*dst1;
	char	*dst2;
	char	*dst3;
	char	*dst4;
	char	src[100] = "12345ABCDE";
	char	str[100] = "12345678901234567890abc12345678901234567890";
	int	n = strlen(src)+1;
//	int	n = 8;
	int	m = 3;

	dst1 = str;
	dst2 = str;
	dst3 = str;
	dst4 = str;

	printf("dst1    = %s\n",dst1);
	printf("dst2    = %s\n",dst2);	
	printf("dst3    = %s\n",dst3);
	printf("dst4    = %s\n",dst4);

	printf("memcpy  = %s\n",    memcpy(dst1 + m,src,n));
	printf("memmove = %s\n",   memmove(dst2 + m,src,n));
	printf("ft_cpy  = %s\n", ft_memcpy(dst3 + m,src,n));
	printf("ft_move = %s\n",ft_memmove(dst4 + m,src,n));
	
	return (0);

}
