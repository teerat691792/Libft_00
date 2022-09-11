/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_trim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:36:56 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/12 03:21:25 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s = ft_strtrim("   xxxtripouille", " x");

	
	printf("tmp1	= %s\n\n",s);
	s = ft_strtrim("tripouille   xxx", " x");

	printf("tmp3	= %s\n\n",s);
	s = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("tmp5	= %s\n\n",s);
	s = ft_strtrim("   xxx   xxx", " x");
	printf("tmp7	= %s\n\n",s);
	s = ft_strtrim("", "123");
	printf("tmp9	= %s\n\n",s);
	s = ft_strtrim("123", "");
	printf("tmp11	= %s\n\n",s);
	s = ft_strtrim("", "");
	printf("tmp13	= %s\n\n",s);
	s = ft_strtrim("abcdba", "acb");
	printf("tmp15	= %s\n\n",s);

	return (0);

}
