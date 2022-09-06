/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <tkulket@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/06 00:04:44 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#include <limits.h>

int	main(void)
{

	int	i;
	int	j;
	int	k;

	i = INT_MAX;
	printf("max	= %d \n",i);
	i = INT_MAX + 1;
	printf("max + 1	= %d \n",i);
	j = INT_MIN;
	printf("min	= %d \n",j);
	j = INT_MIN - 1;
	printf("min - 1	= %d \n",j);
	k = INT_MAX - INT_MIN;
	printf("diff	= %d \n",k);
	k = INT_MAX + INT_MIN;
	printf("diff	= %d \n",k);
	k = INT_MAX + INT_MIN;
	printf("sum	= %d \n",k);

	return (0);
}
