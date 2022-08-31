/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:21:44 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/31 03:13:35 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isall(char a)

{
	int c;

	c = (int)a;

	printf("~~~~~~~~~~~~  ****** ~~~~~~~~~~~~~\n");
	printf("char		= %c \n",a);
	printf("int		= %d \n",c);
	printf("---------------------------------\n");
	printf("isalpha		= %d \n",isalpha(c));
	printf("ft_isalpha	= %d \n",ft_isalpha(c));
	printf("---------------------------------\n");
	printf("isdigit		= %d \n",isdigit(c));
	printf("ft_isdigit	= %d \n",ft_isdigit(c));
	printf("---------------------------------\n");
	printf("isalnum		= %d \n",isalnum(c));
	printf("ft_isalnum	= %d \n",ft_isalnum(c));
	printf("---------------------------------\n");
	printf("isascii		= %d \n",isascii(c));
	printf("ft_isascii	= %d \n",ft_isascii(c));
	printf("---------------------------------\n");
	printf("isprint		= %d \n",isprint(c));
	printf("ft_isprint	= %d \n",ft_isprint(c));
	printf("---------------------------------\n\n\n");

}

int	main(void)
{
	ft_isall('3');
	ft_isall('a');
	ft_isall('B');
	ft_isall('_');
	ft_isall('\t');
	return (0);
}
