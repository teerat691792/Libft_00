/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <tkulket@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/20 01:54:42 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 'T';
	printf("var = %c\n", c);
	printf("var = %d\n", c);
	printf("ft_isalpha = %d\n", ft_isalpha(c));
	printf("ft_isdigit = %d\n", ft_isdigit(c));
	printf("ft_isalnum = %d\n", ft_isalnum(c));
	printf("ft_isascii = %d\n", ft_isascii(c));
	printf("alpha  = %d\n", isalpha(c));
	printf("lower = %d\n", islower(c));
	printf("upper = %d\n", isupper(c));
	printf("digit = %d\n", isdigit(c));
	printf("isalnum = %d\n", isalnum(c));
	printf("isascii = %d\n", isascii(c));
	return (0);
}
