/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <tkulket@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/29 01:09:02 by tkulket          ###   ########.fr       */
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
	char	src[] = "zxcvbnm";
	int	n;

	n = 4;
	printf("ft_ = %u\n",ft_strlcpy(dst1,src,n));
	printf("ctyp = %lu\n",strlcpy(dst2,src,n));
	
	return (0);

}
